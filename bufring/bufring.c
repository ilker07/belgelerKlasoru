
#include "uart_driver.h"
#define BUFFER_SIZE 256

UART_HandleTypeDef UartHandle;

typedef struct UART_Buffer_Type{
	uint32_t buffer[BUFFER_SIZE];
	uint32_t head_pointer;
	uint32_t tail_pointer;
}UART_Buffer_t;

volatile UART_Buffer_t UART_BufferRX;
volatile UART_Buffer_t UART_BufferTX;

static int32_t UART_is_buffer_empty(volatile UART_Buffer_t* buffer);

static void UART_Error_Handler(void);




int __io_putchar(int ch)
{
	UART_send_byte(ch);
	  return ch;
}


void USART2_IRQHandler(void)
{  
  uint32_t isrflags = USART2->ISR;
  uint32_t control_reg1 = USART2->CR1;

 
  if(((isrflags & USART_ISR_RXNE) != RESET) && ((control_reg1 & USART_CR1_RXNEIE) != RESET))
  {
	  

	  UART_BufferRX.buffer[UART_BufferRX.head_pointer] = USART2->RDR;

	  UART_BufferRX.head_pointer = UART_BufferRX.head_pointer + 1;

	  if(UART_BufferRX.head_pointer == BUFFER_SIZE)
	  {
		  UART_BufferRX.head_pointer = 0;
	  }

	  return;
  }


  /* UART in mode Transmitter */
  if(((isrflags & USART_ISR_TXE) != RESET) && ((control_reg1 & USART_CR1_TXEIE) != RESET))
  {    
		if(UART_BufferTX.head_pointer != UART_BufferTX.tail_pointer)
		{
			// Send one byte from Transmit buffer
			USART2->TDR = UART_BufferTX.buffer[UART_BufferTX.tail_pointer++];
			
			if(UART_BufferTX.tail_pointer == BUFFER_SIZE)
			{
				UART_BufferTX.tail_pointer = 0;
			}			
		}
		else
		{
			/* Disable the UART Transmit Data Register Empty Interrupt */
			CLEAR_BIT(USART2->CR1, USART_CR1_TXEIE);
		}			
		
    return;
  }
}

void UART_send_byte(uint8_t data)
{
	UART_BufferTX.buffer[UART_BufferTX.head_pointer++] = data;
	if(UART_BufferTX.head_pointer == BUFFER_SIZE)
	{
		UART_BufferTX.head_pointer = 0;
	}
  /* Enable the UART Transmit Data Register Empty Interrupt */
 SET_BIT(USART2->CR1, USART_CR1_TXEIE);
}

int32_t UART_is_buffer_empty(volatile UART_Buffer_t* buffer)
{
	return (buffer->head_pointer == buffer->tail_pointer?1:0);

}

int32_t UART_read_byte()
{
	int kar =  0; 
	
	if(UART_is_buffer_empty(&UART_BufferRX) == 1 )
	{
		kar = -1;
	}
	else
	{
		kar = UART_BufferRX.buffer[UART_BufferRX.tail_pointer++];
		
		if ( UART_BufferRX.tail_pointer == BUFFER_SIZE)
		{
			UART_BufferRX.tail_pointer = 0;
		}
	}	
	
	return kar;	
}



void UART_send_byte_array(uint8_t* buffer, uint32_t size)
{
	int i;
	
	for( i=0; i<size; i++)
	{
		UART_send_byte(buffer[i]);
	}
}

uint32_t UART_bytes_to_read(void)
{
	if (UART_BufferRX.head_pointer >= UART_BufferRX.tail_pointer)
	{
		return UART_BufferRX.head_pointer - UART_BufferRX.tail_pointer;
	}
	else
	{
		return (BUFFER_SIZE + UART_BufferRX.head_pointer - UART_BufferRX.tail_pointer);
	}
}




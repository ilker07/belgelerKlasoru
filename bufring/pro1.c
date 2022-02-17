#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define SIZE  5
const char dizi2[5]="Dizi";
const char *dizi[4]={"AT+HTTTPTERM","OK","AT//","AT=1"};
const char dizi3[4]={'a','b','c','\0'};



typedef struct dataBasetoServer{

 char istek;
 char cevap;
 int  istekGonderildi;
 int  timeout;
 }db_yapi;


void yap(db_yapi *yapi){
	yapi->cevap='f';
}

db_yapi dataBaseDizi[SIZE];

void create(){
	int i=0;
	for(;i<SIZE;i++)
	{
		db_yapi d;
		d.cevap='N';
		d.istek='N';
		d.istekGonderildi=0;
		d.timeout=0;
		dataBaseDizi[i]=d;
	}
}

void display(){
	int i;
	for(i=0;i<SIZE;i++)
	{
	  printf("Index: %d",i); 
	  printf(" Cevap:%c",dataBaseDizi[i].cevap);
	  printf(" Istek:%c",dataBaseDizi[i].istek);
	  printf(" IstekGonderildi:%d",dataBaseDizi[i].istekGonderildi); 
	  printf(" Timeout:%d",dataBaseDizi[i].timeout);   
	  printf("\n");
	  
	}
	
	 printf("\n\n");
}
void veri_yollaSim800l(const char* dizi)
{
	int a=0;
	while(*dizi)
	{
	
     printf("%c",*dizi);
	 dizi++;
	 a++;	
	}
	 	
	printf(" total:%d",a); 	 
}
int main(int argc, char *argv[]) {
	
	//printf("%s\n",*dizi);
	/*printf("%c\n",*dizi3);
	
	int a =strlen(dizi3);
	printf("%d\n",a);
	int b =sizeof(dizi3);
	printf("%d\n",b);*/
	
	/*db_yapi d1;
	
	d1.istek='a';
	d1.cevap='b';
	d1.istekGonderildi=1;
	d1.timeout=30;
	
	db_yapi *dptr=&d1;
	
	printf("%p\n",dptr);
	printf("%p\n",&d1);
	printf("%p\n",&d1.istek);
	printf("%p\n",&(d1.cevap));
	printf("%p\n",&(d1.istekGonderildi));
	printf("%p\n",&(d1.timeout));
	
	printf("%p\n",dptr);                  
	printf("%p\n",&dptr->istek);           
	printf("%p\n",&dptr->cevap);           
	printf("%p\n",&dptr->istekGonderildi); 
	printf("%p\n",&dptr->timeout);         
	*/
	
	/*yap(dptr);
	printf("Fonksiyon sonrasi %c\n",dptr->cevap);//0000000000000062
	*/
	
	
	/*
	create();
	display();
	dataBaseDizi[2].istek='z';
	dataBaseDizi[3].timeout=400;
	dataBaseDizi[0].istekGonderildi=1;
	dataBaseDizi[1].cevap='s';
	display();
	*/
	//int a=1^19;   // 1^1 =0   ,  0^0=0  , 1^0=1 
	//printf("%d",a);
	
	
	
	/*
	int8_t b=0x33;  //51
	int8_t c=0xFF;  //255 -256=-1
	
	//int16_t a=256*c+b; //255 * -1 =-255 +51
	int16_t a=(c<<8)+b; //255 * -1 =-255 +51
	printf("islemli: %d\n",a);
	
	
	int16_t s=0xFF33;
    printf("normal:%d",s);
    
   */
	
	
	//int8_t c=400; //256 CÝKAR TUTMUYORSA BÝR DAHA ... max number=127  400-256 =144    144-256=-112
	//printf("normal:%d",c);
	
//int ADDR_Ax= 0b000 ;
//int  ADDR= (0b1010 << 3) + ADDR_Ax;

//	printf("normal:%d",ADDR);
//veri_yollaSim800l(dizi);






/*

char dizi[100]="ilkeraa\r  +CSQ :24,0";
char *ptr=NULL;

ptr=strstr((char *)dizi,"+CSQ");
printf("%c",*(ptr+0));
printf("%c",*(ptr+1));
printf("%c",*(ptr+2));
printf("%c",*(ptr+3));
printf("%c",*(ptr+4));
printf("%c",*(ptr+5));
printf("%c",*(ptr+6));
printf("%c",*(ptr+7));
printf("%c",*(ptr+8));
printf("%c",*(ptr+9));
printf("%c",*(ptr+10));



if(*(ptr+6)!='2') 
{
	printf("hata");
}

*/



/*
char *yazi="ilker";

char *a=NULL;
char *ptr=yazi;

//*(yazi+1)='s';
//*a=*ptr;

//*(ptr+1)='d';

printf("%c",*(yazi+1));
*(yazi+1)='h';
*/

int a=0^1;   //1^1 =0;    0^1=1

printf("%d",a);

	
	return 0;
}










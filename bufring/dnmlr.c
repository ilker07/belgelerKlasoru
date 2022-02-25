#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char gelenCevap[10]="";
char karakterDizisi[50]="";

void temizle(char * veri)
{
	int i=0;
	for(;i<strlen(veri);i++)
	   veri[i]='\0'; //veya 0 .
   //veri[0]='\0';	   
}
void delay()
{
	int i=0;
	for(;i<100000000;i++);
}

int main(int argc, char *argv[]) {
	
	
	gelenCevap[0]='a';
	gelenCevap[1]='b';
	gelenCevap[2]='c';
	gelenCevap[3]='d';
	gelenCevap[4]='e';
	gelenCevap[5]='f';
	gelenCevap[6]='g';
	
	
	
	sprintf(karakterDizisi,"%s%d",gelenCevap,0);
	printf("Karakter Dizisi:%s\r\n",karakterDizisi);
	printf("Ilk gelen Cevap:%s\r\n",gelenCevap);
	
	
	gelenCevap[5]='O';
	gelenCevap[6]='K';
	
	
	printf("Degisen gelen Cevap:%s\r\n",gelenCevap);
	char *p=NULL;
	
	p=strstr(gelenCevap,"OK");
	
	if(p) //strstr(gelenCevap,"OK")
	{
	  //temizle(gelenCevap);
	  //strcpy(gelenCevap, " ");
	  printf("Adresi %p Degeri:%s\n",p,p);
	  memset(gelenCevap,0,sizeof(gelenCevap));
	  printf("Cevapta OK var..\r\n");
	  
		
	}
	

	printf("Sildikten sonra gelenCevap:%s\n",gelenCevap);
	
	sprintf(karakterDizisi,"%s",gelenCevap);
	printf("Gelen cevap silindikten sonra Karakter Dizisi:%s\r\n",karakterDizisi);
    
    
    printf("Karakter dizisi boyut:%d\n",strlen(karakterDizisi));
    
    printf("Gelen Cevap[0] :%c\n",gelenCevap[0]);
    printf("Gelen Cevap[1] :%c\n",gelenCevap[1]);
    
    if(gelenCevap[1]=='\0')
      printf("Evet bos\n");
	printf("Gelen cevap boyut:%d\n",strlen(gelenCevap));
	printf("Gelen cevap sizeof:%d\n",sizeof(gelenCevap));
	
	/*
	while(1)
	{
		
	    sprintf(karakterDizisi,"Dizi:%s Sayac:%d",gelenCevap,5);
	    printf("Karakter Dizisi:%s\r\n",karakterDizisi);
	    delay();
		
	}*/
	

	
	
	
	return 0;
}

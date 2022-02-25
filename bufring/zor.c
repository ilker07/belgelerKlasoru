#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char karakterDizisi[5]="";//Null karakter içinde alan lazim.
typedef int veriTuru;


typedef struct Vector
{
	veriTuru * pArr;
	veriTuru sira;
	veriTuru boyut;
	
}Vector,*pVector;
int boyutuArttir(pVector vec);
pVector olustur()
{
	
	pVector vpointer=(pVector)malloc(sizeof(Vector));
	if(vpointer==NULL)
	{
		printf("Baþarisiz ilk adim\n");
		free(vpointer);
		exit(1);
	}
	
	vpointer->sira=0;
	vpointer->boyut=8;
	
	vpointer->pArr=(veriTuru *)malloc(vpointer->boyut * sizeof(veriTuru));
	if(vpointer->pArr==NULL)
	{
		printf("Baþarisiz array \n");
		free(vpointer);
		exit(1);
	}
	
	

	return vpointer;
	
}
int veriEkle(pVector vec,veriTuru val)
{
	if(vec->sira>=vec->boyut)
	  if(boyutuArttir(vec)==-1)
	   return -1;
	   
	vec ->pArr[vec->sira++]=val;
	return 1;
}



int sirayiGetir(pVector vec)
{
	return vec->sira;
}
int boyutuGetir(pVector vec)
{
	return vec->boyut;
}

int boyutuArttir(pVector vec)
{
	veriTuru * yeniAlan=(veriTuru *)realloc(vec->pArr,vec->boyut * 2 * sizeof(veriTuru));
	if(yeniAlan==NULL)
	{
		return -1;
	}
   vec->boyut=vec->boyut *2;
   vec->pArr=yeniAlan;	
}


void yaz(const char *dizi)
{
	
	int sayi=0;
	while(*dizi)
	{
	
	  printf("Karakter:%c\n",*dizi++);
	  sayi++;
   }
  printf("%d",sayi);	  
	  
}



char gelenCevap[10]="";

char karakter[10]="";


void oo(char * p)
{
	while(*p)
	{
		
	printf("%c",*p);
	p++;
	}
}


int main(int argc, char *argv[]) {
	

	/*
	Vector * donen=olustur();
	
	printf("Olusturulan Dizi sira:%d Boyut:%d\n ",sirayiGetir(donen),boyutuGetir(donen));
	int i=0;
	for(;i<10;i++)
	{
		veriEkle(donen,i);
	}
	
	for(i=0;i<10;i++)
	{
	printf("Idx :%d Deger:%d\n ",i,donen->pArr[i]);

	}
	printf("Doldurulan Dizi sira:%d Boyut:%d\n ",sirayiGetir(donen),boyutuGetir(donen));

   //vektorDoldur(donen);
*/	
    //sprintf(karakterDizisi,"Sayi%d",1);
   
//	yaz(karakterDizisi);


   //86
   
   
   //GET /connect.php?&veri=1234
//HTTP/1.1

/*AT+CIPSTART=2,"TCP","184.106.153.149",80

2,CONNECT

OK
AT+CIPSEND=2,65


OK
> .1

busy s...

Recv 65 bytes

SEND OK

+IPD,2,8:17:44:222,CLOSED
*/

/*

  char dizi[]="GET /apps/thinghttp/send_request?api_key=EVZYLR57FLRCDA9D\r\n";  //57 +8 =65
  char dizi2[]="HTTP/1.1\r\n";
  
  printf("%d\n",strlen(dizi));
  printf("%s\n",dizi);
  
   printf("%d\n",strlen(dizi2));
  printf("%s\n",dizi2);
  */
    
    /*
    char arr[]="Recv 65 bytes\
     SEND OK\
     +IPD,8:15:25:30CLOSED";
	*/
	
	char arr[]="Burasi ilk.";
	
	//char *ptr=strstr(arr,"+IPD");
	//char *ptr2=strstr(arr,"CLOSED");

	/*	
	printf("%s\n",ptr);
	printf("%s\n",ptr2);
	
	printf("%p\n",ptr);
	printf("%p\n",ptr2);
	
	printf("%p\n",ptr2-ptr);
	//printf("%s\n",ptr2-ptr);
	int saat=0;
	printf("%c%c\n",ptr[7],ptr[8]);
	printf("%c%c\n",ptr[10],ptr[11]);
    printf("%c%c\n",ptr[13],ptr[14]);
	
	saat =(((int)ptr[7]-48)*10) +((int)ptr[8]-48);
	printf("%d\n",saat);*/
	
	//printf("%s",arr);
	
	/*
	char s1[50] ="ilker";
    char s2[10] ="Mustafa";
    
    char *p=NULL;
    //p=strcpy(s1+strlen(s1),s2);
    p=strcpy(s1+strlen(s1),s2);
    //printf("%s\n",p);
    printf("%s\n",s1);
	printf("%s\n",s2);
    */
    
    /*
    int gonderilecekSayi=26;
    
   char adres []="<!DOCTYPE html><html><body><form><input type='button' id='LB' onclick='sw()' value='onLED'/></form>\
	<script>function sw(){var button_text=document.getElementById('LB').value;\
   if(button_text=='onLED'){document.getElementById('LB').value='offLED';aL('LEDON');}else{document.getElementById('LB').value='onLED';aL('LEDOFF');}}\
   function aL(aU){var aR =new XMLHttpRequest();\
   aR.onreadystatechange=function(){if(aR.readyState==4&&aR.status==200){}};\
  aR.open('GET',aU,true);aR.send();}\
  </script></body></html>";     
	
	char cipsend []="AT+CIPSEND=0,";
		   char stringSayi[5];
		   sprintf(stringSayi,"%d\r\n",strlen(adres));
		   strcpy(cipsend+strlen(cipsend),stringSayi);
	
	
	printf("%s\n",cipsend);
	printf("Boyut %d\n",strlen(cipsend));
	//printf("Boyut %d\n",strlen("GET /apps/thinghttp/send_request?api_key=50AGOLCWM5CHEQ1K\r\nHTTP/1.1\r\n"));
	*/
	
	char *ptr=NULL;
	char *dPtr=NULL;
	
char html []="<!DOCTYPE html><html><body>\
   <div  style='text-align:center;margin-top:75px;'>\
      <button  style='background-color: green;width: 100px;height: 50px;' id='ledAc' onclick='uygula(\"ac\")'>Ac</button>\
      <button style='background-color: red;width: 100px;height: 50px;'  id='ledKapat'  onclick='uygula(\"kapat\")' disabled='true'>Kapat</button>\
   </div>\
   <h2 id='ledDurum' style='text-align:center;color:red;'>KAPALI</h2><script>\
    function aL(aU){var aR =new XMLHttpRequest();aR.onreadystatechange=function(){if(this.readyState==4 && this.status==200){\
              if(aU=='LEDON'){document.getElementById('ledAc').disabled=true;setTimeout(git,1000,'ledKapat');}\
              else{document.getElementById('ledKapat').disabled=true;setTimeout(git, 1000, 'ledAc');}}};\
     aR.open('GET',aU,true);aR.send();}\
    function uygula(durum){if(durum=='ac'){aL('LEDON');}else{aL('LEDOFF');}}\
    function git(kimlik) {\
        if(kimlik=='ledKapat')\
        {var deger=document.getElementById('ledDurum');deger.style.color='green';deger.innerHTML='ACIK';}\
        else{var deger=document.getElementById('ledDurum');deger.style.color='red';deger.innerHTML='KAPALI';}document.getElementById(kimlik).disabled=false;}\
   </script></body></html>";

    char degis[]="<h2 id='ledDurum' style='text-align:center;color:green;'>ACIK</h2>";
    
    
    char birinciCumle[]="Birinci cumle basladi.Ilker Mustafa Aykut.Devam edecek.";
    char ikinciCumle[]="Isim belirsizBelirsizBelirsiz";
    
    printf("%s\n",birinciCumle);
    
    
    memmove(birinciCumle+22, ikinciCumle, strlen(ikinciCumle));
    
    printf("%s\n",birinciCumle);
    
    
    /*
   	printf("Boyut Degisecek %d\n",strlen(degis));
    
    printf("html %s\n",html);
    printf("\n\n\n");
	printf("Boyut %d\n",strlen(html));
	
	
	
	ptr=strstr(html,"<h2");
	dPtr=strstr(html,"<script>");
	printf("\n\n\n");
	
    printf("Baslangic %s\n",ptr);
    printf("\n\n\n");
    printf("Baslangic %p\n",ptr);
    
    printf("\n\n\n");
    
     printf("Bitis %s\n",dPtr);
     printf("\n\n\n");
    printf("Bitis %p\n",dPtr);
    printf("\n\n\n");
    
    printf("Fark %d\n",dPtr-ptr);
    
    int i=0;
    printf("Satir:");
    for(i=0;i<dPtr-ptr;i++)
    {
    	printf("%c",*(ptr+i));
	}
	printf("\n\n\n");
	
     for(i=0;i<dPtr-ptr;i++)
    {
    	*(ptr+i) =degis[i];//degis[i];
    	
	}
	printf("html %s\n",html);
	
	*/
	
	
	
    /*
     printf("\n\n");
    ptr[0]='x';
    ptr[1]='d';
    printf("html %s\n",html);
    */
	return 0;
}

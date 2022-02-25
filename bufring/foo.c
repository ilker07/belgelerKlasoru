#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
//extern int x;
typedef union Digital_Analog{
	
	int digital;
	int analog;
	
}da;

typedef struct Yapi {
     	
  uint8_t id1;
  bool id2;
  int id3;
  uint8_t dd;
  int cd1;
  uint8_t cd2;
  da deger;
   
} yapi;

//yapi y;
//yapi *yptr =&y;
void degistir(char *src,char*substring,char*degis){
	char*ptr=strstr(src,substring);//Buldugu yerden en sona kadar olan bölüm string.
	if(ptr==NULL){
	 printf("Null\n");
	 return;}
	/*
	printf("Ptr boyut:%d\n",strlen(ptr));//Ilker Mustafa Aykut.Devam edecek.
	printf("Degisecek kelime boyut:%d\n",strlen(degis));//Hello World Merhaba Dunya hosgeldiniz yazi  Degisti
    printf("Memmove Ilk parametre:%s\n",ptr+strlen(degis));// ptr+51   
    //printf("Eski kelime boyut:%d\n",strlen(substring));//19
    printf("Memmove Ikinci parametre:%s\n",ptr+strlen(substring));//ptr +len  Ilker Mustafa Aykut ( .Devam edecek.)
    printf("Memmove Ucuncu parametre:%d\n",strlen(ptr)-strlen(substring)+1);//Hello World Merhaba Dunya hosgeldiniz yazi  Degisti
	printf("ptr:%s\n",ptr);//Hello World Merhaba Dunya hosgeldiniz yazi  Degisti*/
	memmove(ptr+strlen(degis),ptr+strlen(substring),strlen(ptr)-strlen(substring)+1);
	// ptr+51  ,.Devam edecek.,15
	//printf("F icinde ptr:%s\n",ptr);
	//printf("ptr:%s\n",ptr);//Hello World Merhaba Dunya hosgeldiniz yazi  Degisti
	memcpy(ptr,degis,strlen(degis));
	
	//printf("ptr:%s\n",ptr);//Hello World Merhaba Dunya hosgeldiniz yazi  Degisti
}

void gonder(const char* liste){
	
	
}

int fonk(int *ptr){
   
    printf("Fonksiyona gelen parametre::%d\n",*ptr);
}

//ptr+7 ,  ptr +19  , 15      ptr:33

int main(int argc, char *argv[]) {
	
	 /*
    char birinciCumle[]="Birinci cumle basladi.Ilker Mustafa Aykut.Devam edecek.";
    char ikinciCumle[]="Degisti";
    
    printf("1:%s\n",birinciCumle);
    degistir(birinciCumle,"Ilker Mustafa Aykut",ikinciCumle);
    printf("2:%s\n",birinciCumle);
    int id=5;
    char ipAddress[]="192.168.1.37";
    char html[]="Bos";
    strcpy(html,"<form action=\"");
	strcat(html, ipAddress); 
	 
	strcat(html, "\" method=\"GET\">"); 
	printf("%s\n",html);
 
    //printf("id:%d\n",id);*/
    
    /*
    char birinciCumle[200]="Birinci cumle basladi.Ilker Mustafa Aykut.Devam edecek.";
    char ikinciCumle[]="Hello World Merhaba Dunya hosgeldiniz yazi  Degisti";
    
    printf("1:%s\n",birinciCumle);
    printf("ilk boyut:%d\n",strlen(birinciCumle));
    degistir(birinciCumle,"Ilker Mustafa Aykut","Hello World Merhaba Dunya hosgeldiniz yazi  Degisti");
    printf("2:%s\n",birinciCumle);
    printf("ikinci boyut:%d\n",strlen(birinciCumle));
*/


/*
char html2[1300]="<html><body>\
<div  style='text-align:center;margin-top:75px;'>\
<button  style='background-color: green;width: 100px;height: 50px;' id='ledAc' onclick='uygula(\"ac\")' >Ac</button>\
<button style='background-color: red;width: 100px;height: 50px;'  id='ledKapat'  onclick='uygula(\"kapat\")' disabled='true'>Kapat</button>\
</div>\
<h2 id='ledDurum' style='text-align:center;color:red;'>KAPALI</h2>\
<script>\
function aL(aU){var aR =new XMLHttpRequest();aR.onreadystatechange=function(){if(this.readyState==4 && this.status==200){\
if(aU=='LEDON'){document.getElementById('ledAc').disabled=true;git('ledKapat');}\
else{document.getElementById('ledKapat').disabled=true;git('ledAc');}}};\
aR.open('GET',aU,true);aR.send();}\
function uygula(durum){if(durum=='ac'){aL('LEDON');}else{aL('LEDOFF');}}\
function git(kimlik) {\
if(kimlik=='ledKapat')\
{var deger=document.getElementById('ledDurum');deger.style.color='green';deger.innerHTML='ACIK';}\
else{var deger=document.getElementById('ledDurum');deger.style.color='red';deger.innerHTML='KAPALI';}document.getElementById(kimlik).disabled=false;}\
</script></body></html>";
   
      printf("ilk boyut:%d\n",strlen(html2));
      
      //Durum 1    
      
      
      degistir(html2,"onclick='uygula(\"kapat\")' disabled='true'>Kapat<","onclick='uygula(\"kapat\")' >Kapat<");//kapat butonu aktif.
	  degistir(html2,"onclick='uygula(\"ac\")' >Ac<","onclick='uygula(\"ac\")' disabled='true'>Ac<");//ac pasif.
	  degistir(html2,"color:red;'>KAPALI<","color:green;'>ACIK<");
	 
	  //Durum 0
	 
	printf("ikinci boyut:%d\n",strlen(html2));
	
		printf("HTML:%s\n",html2);
		
		degistir(html2,"onclick='uygula(\"ac\")' disabled='true'>Ac<","onclick='uygula(\"ac\")' >Ac<");//Ac aktif olmali.
		degistir(html2,"onclick='uygula(\"kapat\")' >Kapat<","onclick='uygula(\"kapat\")' disabled='true'>Kapat<"); //null kapat pasif olmali.
		degistir(html2,"color:green;'>ACIK<","color:red;'>KAPALI<");
		
		printf("son boyut:%d\n",strlen(html2));
	
		printf("HTML:%s\n",html2);
	//int i;
	//for( i=0;i<100000000;i++);*/

    

// printf("Yapi boyutu: %d\n", sizeof(yapi)); 
/* yapi y;
 yapi *yptr=&y;
 
 //y.id1=5;
 yptr->id2=10;
 //printf("id1 : %d\n", y.id1); 
 printf("ptr id2 : %d\n", yptr->id2);*/
/*
 yptr->cd1=5;
 yptr->deger.digital=3;
 printf("ptr  : %d\n", yptr->deger.digital);*/
 
// uint8_t kanal=4; //1000 0000   0100 0000   0010 0000
                    //0000 0001
 
 //int b=(kanal &(1<<7));
 //int b=kanal>>0;//0000 0100
 
 //int b=((kanal >>5)  & 0x01);

//uint8_t sayi=0;

//sayi=(300+16) & 0x00FF;
 
// printf("sayi:%d\n", sayi);
 //printf("c:%f\n",c);
 //printf("c:%d\n", c);
 
 
 //printf("x:%d\n",x);
//volatile char dizi[1024]="";
 
 //dizi[0]='a';
 //dizi[1]='b';
 // printf("dizi:%s\n",dizi);
 //gonder((char *)dizi);
 
//double a=999999999;
//a/=100;
 //printf("a:%f\n",a);
 
 
 //double a=fonk();
 //printf("a: %f\n",a); 
  yapi y;
  yapi *yptr =&y;
  yptr->cd1=30;
  
  fonk(&(yptr->cd1));
 
	return 0;
}

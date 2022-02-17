#include <iostream>

using namespace std;
//const char dizi2[5]="Dizi";
//const char *dizi[4]={"AT+HTTTPTERM","OK","AT//","AT=1"};
char *dizi="abc";
typedef struct dataBasetoServer{

 char *istek;
 char *cevap;
 int    istekGonderildi;
 int   timeout;
 }db_yapi;


db_yapi s2,s3,s4,s5,s6,s7;
db_yapi s1{"yazi","yazi2",1,50};
db_yapi * server_array[7]={&s1,&s2,&s3,&s4,&s5,&s6,&s7};

 double a,b,c;

int main(int argc, char** argv) {
	
  /*	//s1.timeout=50;
	s2.timeout=150;
	s3.timeout=250;
	s4.timeout=530;
	s5.timeout=450;
	s6.timeout=520;
	s7.timeout=70;
	
	int i=0;
	for(;i<7;i++)
	  cout<<server_array[i]->timeout<<"\n";
	  
	  cout<<dizi[0]<<"\n";
	  dizi[4]='s';*/
	  
	 
	  
	 a=8411111.70;
	 b=8411111.36;
    
    
     c=a-b;
    printf("%f",c);
	  

	return 0;
	
	
}

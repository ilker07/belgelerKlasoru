

//Ders 151 Neso  devam


//Veri Turleri
/*
char	8	-128	127	%c	%c
unsigned char	8	0	255	%c	%c
signed char	8	-128	127	%c	%c
int	16 veya 32	-32.768 veya -2.147.483.648	32.767 veya 2.147.483.647	%d	%d
unsigned int	16 veya 32	0	65.535 veya 4.294.967.295	%u	%u
short int	16	-32.768	32767	%hd	%hd
unsigned short int	16	0	65.535	%hu	%hu
long int	32	-2.147.483.648	2.147.483.647	%ld	%ld
long long int (C99)	64	-9.223.372.036.854.775.808	9.223.372.036.854.775.807	%lld	%lld
unsigned long int	32	0	4.294.967.295	%lu	%lu
unsigned long long int (C99)	64	0	18.446.744.073.709.551.615	%llu	%llu
float	32	1.17549e-038	3.40282e+038	%f	%f
double	64	2.22507e-308	1.79769e+308	%f	%lf
long double	96	3.3621e-4932	1.18973e+4932	%Lf	%Lf
*/

//short int16,long int32


//Veri girilenden büyük yer kaplýyorsa giriden deðer-256(8 bit ise),Veri (-) deðer ise +256(8 bit ise) ekle.
//	printf("%10s","Hello"); 5 karakter boþluk 5 karakter yazar.
//unsigned i ya da signed i hatalý tanýmlama degil.Compiler int kabul eder.


//unsigned bir ifade ye - atarsak o deger unsignedin en buyuk deðeri+deger+1 olur.(deger negatif bir sayi.)(255-251+1)

//Eksi sayinin artýlý halinin butun bitlerinin tersi alinir sonra 1 eklenir. Sonuc - olur.

//ana c dosyasinda extern int s; diger dosyada int s=22;

//int var=052; oktal deger ==> 8 uzei0 * 2 + 8 uzeri 1 *5 ==>42

//&& koþulunda 1 .yanlis ise diðerlerini yapmaz(degerlendirmez.)
//|| koþulunda 1 .dogru ise diðerlerini yapmaz(degerlendirmez.)

//sola kaydirmanin sonucu= deger * 2 uzeri kaydirma_sayisi   deger=3   3<<1 ==> 3 * 2 uzeri 1=6
//saga kaydirmanin sonucu= deger / 2 uzeri kaydirma_sayisi   deger=3   3>>1 ==> 3 / 2 uzeri 1=1
//xor de ikisi ayni ise sonuc 0,farkli ise 1
//int a=3,b=2;  (a>b) ? printf("Buyuk") : printf("Kucuk");
//int c=(1,2,3); c=3 olur.
//int a=(printf("%s","Merhaba"),4);printf("%d",a); Ekrana merhaba yazar,a=4 yapar.
// int var=sizeof(i++); Bu iþlemden sonra i nin deðeri deðiþmez.
	




//gcc dosya_adi.c -o dosya_adi.exe





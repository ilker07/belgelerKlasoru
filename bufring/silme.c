#include <stdio.h>
#define MAX_SIZE 100
#include <string.h>


char last_name[30];
char first_name[30];
char name1[30];
char name2[30];
char name3[30];

char str2[]="$GPGGA,123128.00,4042.98491,N,02947.98496,E,1,06,1.69,73.6,M,38.1,M,,*6A";


typedef struct guest {
  char last_name[30];
  char first_name[30];
  char name1[30];
  char name2[30];
  char name3[30];
}guest_t;

void guest_init(struct guest *g, char *info)
{
  strcpy(g->first_name,strtok(info, ","));
  strcpy(g->last_name, strtok(NULL, ","));
  strcpy(g->name1, strtok(NULL, ","));
  strcpy(g->name2, strtok(NULL, ","));
  strcpy(g->name3, strtok(NULL, ","));
}

void yap()
{
  strcpy(first_name,strtok(str2, ","));
  strcpy(last_name, strtok(NULL, ","));
  strcpy(name1, strtok(NULL, ","));
  strcpy(name2, strtok(NULL, ","));
  strcpy(name3, strtok(NULL, ","));
}

int main()
{
    /*char  arr[MAX_SIZE]="ilker aykut";
    int i=0, size=0;
    
       size=strlen(arr);
  
    
    

        for(i=0; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

       
        size--;

        
       
        for(i=0; i<size; i++)
        {
            printf("%c", arr[i]);
        }
    */
    
     char str[]="$GPGGA,123128.00,4042.98491,N,02947.98496,E,1,06,1.69,73.6,M,38.1,M,,*6A";
    char str3[]="$GPGGA,123128.00,4042.98491,N,02947.98496,E,1,06,1.69,73.6,M,38.1,M,,*6A";

    char bilgi[30]="";
    char zaman[30]="";
    char enlem[]="";
    char enlem_yon[]="";
    char boylam[]="";
    char boylam_yon[]="";
    char fix_durum[]="";
    char uydu_sayisi[]="";
    char bilinmeyen[]="";
    char deniz_seviyesi_yukseklik[]="";
    char deniz_seviyesi_yukseklik_birim[]="";
    

    
    /*char *ptr=NULL;
    
    ptr = strtok(str, ",");
    

    while (ptr != NULL)  {
      printf ("%s\n", ptr);
      ptr = strtok (NULL, ",");
    }
    */
    
    
    
    
    /*
    guest_t g;
    printf("str = %s\n",str);
    //char info[] = "Foo/Bar/kelime2/kelime3/kelime4";
    guest_init(&g, str);
    
    printf("First Name = %s\n", g.first_name);
    printf("Last Name = %s\n", g.last_name);
    printf("Name1 = %s\n", g.name1);
    printf("Name2 = %s\n", g.name2);
    printf("Name3 = %s\n", g.name3);
    */
    
    
    
    //int val = atoi(dizi);

    //printf("%d\n",val);
    
    
    char arr[]="4042.98491";
    char copy[10];
    char iki_karakter[5];
    
    iki_karakter[0]=arr[0];
    iki_karakter[1]=arr[1];
    iki_karakter[2]=' ';
    
    strcpy(copy,arr+2);

    strcat(iki_karakter,copy);

       
        
    printf("%s",iki_karakter);
    
    
     //printf("%s\n",veri);

    return 0;
}

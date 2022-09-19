#include <stdio.h>
int main(){
     int sayi1,sayi2,i,toplam=0;

     printf("1. sayiyi giriniz. "); 
     scanf("%d",&sayi1); 
     printf("2. sayiyi giriniz. "); 
     scanf("%d",&sayi2); 

     for(i=sayi1+1 ; i<sayi2 ; i++){    
          toplam = toplam + i;
     } 

     printf("Sonuc : %d",toplam);
}

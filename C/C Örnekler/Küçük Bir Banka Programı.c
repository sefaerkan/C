#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("Islemler\n 1:Para Cekme\n 2:Para Yatirma\n 3:Havale Yapma\n 4:Bakiye Sorma\n 5:Kart İade\n\n");
	
	printf("Islem Seciniz:");
	scanf("%d",&islem);
	 
	 switch(islem){
	 	
	 case 1:
	 printf("Bakiyeniz: %d", bakiye);
	 printf("Cekilecek Tutar:");
	 scanf("%d",&tutar);
	 if(tutar>bakiye){
	 	printf("Bakiye Yetersiz\n");
	 }	
	 bakiye-=tutar;
	 printf("Bakiyeniz: %d", bakiye);
	 break;
	 
	 case 2:
	 printf("Bakiyeniz: %d", bakiye);
	 printf("Yatirilacak Tutar:");
	 scanf("%d",&tutar);	
	 bakiye+=tutar;
	 printf("Bakiyeniz: %d", bakiye);
	 break;
	 
	 case 3:
	 printf("Bakiyeniz: %d", bakiye);
	 printf("Havale Yapilacak Tutar:\n");
	 scanf("%d",&tutar);
	  if(tutar>bakiye){
	 	printf("Bakiye Yetersiz\n");
	 }	
	 bakiye-=tutar;
	 printf("Bakiyeniz: %d", bakiye);
	 break;
	 
	 case 4:
	 printf("Bakiyeniz: %d",bakiye);
	 break;
	 
	 case 5:
	 printf("Kartiniz iade edildi.\n");
	 break;
	 
	 default:
	 printf("Bilinmeyen işlem.");
	 break;	
	 	}
	 return 0;
	   }

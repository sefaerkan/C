#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float sayilar[5];
	int i;
	float toplam;
	
	for(i=0; i<5; i++){
    printf("Bir sayi giriniz: ");
    scanf("%f",&sayilar[i]);
     }
	for(i=0; i<5; i++){
		toplam+=sayilar[i];
	}
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f dir", toplam / 5);
	
	return 0;
}
/*
Dýþardan diziye dahil edilen sayýlarýn aritmetik ortalamsý
*\

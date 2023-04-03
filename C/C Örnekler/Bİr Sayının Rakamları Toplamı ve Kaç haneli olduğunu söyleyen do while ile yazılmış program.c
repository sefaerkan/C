#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n;
	int hane=0;
	int toplam=0;
	 printf("Sayiyi Giriniz:");
	 scanf("%d",&n);
	 
	 do{
	 
	 toplam += (n %10);
	 hane ++;
	 n = n/10;	
	 }
	 while(n>0);
	 printf("Rakamlari Tolami %d %d haneli", toplam, hane );
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

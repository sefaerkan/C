#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi , gecici , sonuc=0 , basdeg;
	
	printf("Sayi Gir:");
	scanf("%d",&sayi);
	
	gecici=sayi;
	
	while(gecici>0){
		
		basdeg=gecici%10;
		sonuc+=basdeg*basdeg*basdeg;
		gecici/=10;
		
	}
	if(sayi==sonuc)
	printf("%d Sayi Armstrongdur",sayi);
	
	else
	printf("%d Armstrong Degildir",sayi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}

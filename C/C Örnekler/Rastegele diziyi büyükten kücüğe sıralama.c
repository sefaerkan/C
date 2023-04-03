#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int main() {
	int dizi[10], i , j;
	srand(time(NULL));
	
	printf("Karisik hali:\n");
	for(i=0 ; i<10; i++)
	{
	dizi[i]=1+rand()%100;
	printf("%d-%d\n",i+1, dizi[i]);
	}
	for(i=0 ; i<10; i++)
	{
	for(j=0 ; j<10; j++)
	{
	if(dizi[j+1]>dizi[j])
	{
	int gecici=dizi[j];
	dizi[j]=dizi[j+1];
	dizi[j+1]=gecici;	
		
	}
	}	
	}
	printf("Buyukten kucuge siralanmis hali:\n");
	for(i=0; i<10; i++)
	{
	printf("%d-%d\n",i+1, dizi[i]);
		
	}
	
	getch();
}

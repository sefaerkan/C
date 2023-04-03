#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n;
	int fact=1;
	printf("Faktoriyel Istediginiz Sayi:");
	scanf("%d",&n);
	
	while(n !=0){
	
	fact = fact*n;
	
	n--;
	}
	printf("%d",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

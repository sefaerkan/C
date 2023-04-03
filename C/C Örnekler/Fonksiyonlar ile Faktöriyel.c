#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){
	int fact =1;
	for(;sayi > 0; sayi--){
		fact *= sayi;
	}
	return fact;
}

int main() {
	int n;
	printf("Faktoriyelini istediginiz sayi:");
	scanf("%d",&n);
	
	printf("Faktoriyel: %d", faktoriyel(n));
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ilksayi=1;
	int ikincisayi=1;
	int i;
	printf("%d\n%d\n", ilksayi,ikincisayi);
	for(i=0; i<12; i++){
	
	int temp= ikincisayi;
	ikincisayi+=ilksayi;
	ilksayi=temp;
	
	printf("%d\n",ikincisayi);	
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

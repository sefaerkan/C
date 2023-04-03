#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i , j, sayi, s=1;
	printf("Satir sayisi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d\t",s);
			s++;
		}
		printf("\n");
	}
	getch();	
	
	
	
	
	
	
	return 0;
}

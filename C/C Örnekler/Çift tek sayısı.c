#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sayiAdet;
	int sayi;
	int c=0,t=0,i;
	printf("Sayi Adedi Giriniz:");
	scanf("%d",&sayiAdet);
	for(i=0;i<sayiAdet;i++){
	printf("Sayi Giriniz\n");
	scanf("%d",&sayi);
	if(sayi % 2 ==0)
			c++;
		else
			t++;
	}
	printf("Cift sayi adedi: %d\n",c);
	printf("Tek sayi adedi: %d",t);
	
	
	
	
	
	return 0;
}

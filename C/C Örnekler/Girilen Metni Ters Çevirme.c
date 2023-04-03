#include <stdio.h>
#include <string.h>

void cevir(char dizi[])
{
	int i , uzunluk , gecici;
	uzunluk=strlen(dizi);
	
	for(i=0; i<uzunluk/2; i++)
{
	gecici=dizi[i];
	dizi[i]=dizi[uzunluk-1-i];
	dizi[uzunluk-1-i]=gecici;	
}
}



int main()
{
    char text[200];
    printf("Metni Giriniz:");
    scanf("%s",text);
    
    cevir(text);
    printf("%s",text);





	return 0;
}

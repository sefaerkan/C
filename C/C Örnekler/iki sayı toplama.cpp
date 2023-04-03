#include <stdio.h>
#include <locale.h>
int main()
{
    //Türkçe karakter sorunu çözümü
     char *locale;
     locale = setlocale(LC_ALL, "");

     int x;
     int y;
     int sonuc;
     printf("\n Birinci sayıyı girin: ");
     scanf("%d",&x);
     printf("\n İkinci sayıyı girin: ");
     scanf("%d",&y);
     sonuc = x + y;
     printf("\n İki sayının toplamı: %d",sonuc);
     return 0;

}

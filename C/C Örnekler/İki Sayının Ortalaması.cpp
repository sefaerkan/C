#include <stdio.h>
#include <locale.h>
int main()
{
    //Türkçe karakter sorunu çözümü
     char *locale;
     locale = setlocale(LC_ALL, "");
     int x;
     int y;
     int ort;
     printf("x giriniz:");
     scanf("%d", &x);
     printf("y giriniz:");
     scanf("%d", &y);
     ort=(x+y)/2;
     printf("\n iki sayinin ortalamasi: %d", ort);
     return 0;
 }


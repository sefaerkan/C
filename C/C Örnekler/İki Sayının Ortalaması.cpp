#include <stdio.h>
#include <locale.h>
int main()
{
    //T�rk�e karakter sorunu ��z�m�
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


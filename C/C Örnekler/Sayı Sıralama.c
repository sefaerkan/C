#include <stdio.h>

#include<stdlib.h>

#include<time.h>

void main()

{

int sayi=0,tahmin=0;

int kackez=0;

srand(time(NULL));

 

sayi=rand()%100+1;

 

printf("tahmin ettigim sayiyi bil bakalim?n");

scanf("%d", &tahmin);

 

while(tahmin!=sayi)

{

if(tahmin<sayi)

{

printf("daha buyuk sayi tahmin etmelisinn");

scanf("%d", &tahmin);

kackez++;

}

if(tahmin>sayi)

{

printf("daha kucuk sayi tahmin etmelisinn");

scanf("%d", &tahmin);

kackez++;

}

if(tahmin==sayi)

{

printf("tebrikler %d defada bildinizn",kackez+1);

}

 

}

printf("tebrikler %d sayisini %d defada bildiniz", sayi, kackez+1);

}

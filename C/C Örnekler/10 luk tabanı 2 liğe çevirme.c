#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,i=0,k[20];
    printf("Bir sayi giriniz:");
    scanf("%d",&a);
    while(a>=1)
    {
    i++;
    k[i]=a%2;
    a=a/2;
    }
	printf("\nIkilik tabandaki sayi karsiligi:");
    for(i=i;i>0;i--){
    printf("%d",k[i]);
	}
    return 0;
}

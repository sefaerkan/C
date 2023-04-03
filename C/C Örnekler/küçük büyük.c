#include <stdio.h>
#include <stdlib.h>

int *EK(int *dizi[],int size){
	int k;
	int enk=dizi[0];
    for(k=1; k<size+1; k++){
        if(dizi[k]<enk)
		{
            enk=dizi[k];
        }
    }
	return enk;
}
int *EB(int *dizi[],int size){
	int j;
	int n=size;
	int enb=dizi[0];
    for(j=1; j<n; j++){
        if(enb<dizi[j]){
            enb=dizi[j];
        }
    }
	return enb;	
}


int main(int argc, char *argv[]) {
	int i,size;
	printf("Dizi boyutu nedir:");
	scanf("%d",&size);
	int *dizi[size];
	for(i=0; i<size; i++)
   {
       printf("Lutfen Siradaki Dizi Elemanini Giriniz\n");
       scanf("%d",&dizi[i]);
   }
	int *enkucuk= EK(dizi,size);
	printf("en kucuk sayi: %d",enkucuk);
	printf("\n");
	int *enbuyuk=EB(dizi,size);
	printf("en buyuk sayi: %d",enbuyuk);
	
	return 0;
}

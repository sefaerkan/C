#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int ort,adet,toplam,i;
	toplam=0;
	adet=0;
	for(i=0;i<=200;i++){
	 if(i%4==0)
	 {
	 adet +=1;
	 toplam +=i;
	 printf("%d\t",i);
	}
	}
	ort = toplam / adet;
	printf("\n");
	printf("\n");
	printf("Adet: %d \n",adet);
	printf("Toplam: %d \n",toplam);
	printf("Ortalam: %d \n",ort);
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int cs , ps, hammaas=1000;
	float gecici1=0,gecici2=0,toplammaas;
	
	printf("Cocuk Sayisi Girin: ");
	scanf("%d",&cs);
	printf("Parca Sayisi Girin: ");
	scanf("%d",&ps);
	
	if(cs==1){
		gecici1= hammaas*0.05;
	}
	else if(cs==2){
		gecici1= hammaas*0.10;
	}
	else if(cs>=3){
		gecici1 = hammaas*0.15;
	}
	else{
		gecici1 = 0;
	}
	printf("Cocuk Yardimi : %f dir.",gecici1);
	printf("\n");
	
    if(ps>=50 && ps<100){
        gecici2 = hammaas*0.10;
        }
    else if(ps>=100 && ps<150){
            gecici2 = hammaas*0.15;
        }
    else if(ps>=150 && ps<200){
            gecici2 = hammaas*0.20;
        }
    else{
        	gecici2=0;
		}
    printf("Parca Yardimi : %f dir.",gecici2);
    printf("\n");
        
    toplammaas = hammaas + gecici1 + gecici2;
    printf("Toplam Maasiniz: %f dir.",toplammaas);
	
    return 0;
}

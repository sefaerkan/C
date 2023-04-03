#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogr{
	char ad[50];
	float odev1,odev2;
	float quiz1,quiz2,quiz3;
	float vize1,vize2;
	float final;
	float gecme_notu;
};

int main(int argc, char *argv[]) {
	int boyut,i,j;
	float tut;
	FILE *fdosya; 
	fdosya=fopen("notlar.txt","wb+");
	if((fdosya==NULL))
	{
	printf("Dosya acilamadi");
	exit(1);
	}
	float odevtoplam;
	float quiztoplam;
	float vizetoplam;
	float finaltoplam;
	printf("Ogrenci sayisini giriniz:"); 
	scanf("%d",&boyut);
	struct ogr a_sinifi[boyut];
	float dizi[boyut];
	for(i=0;i<boyut;i++){
		printf("\n");
		printf("%d. no'lu ogrenci adi: ",i+1);
		scanf("%s",a_sinifi[i].ad);
		printf("%d. no'lu ogrenci odev1: ",i+1);
		scanf("%f",&a_sinifi[i].odev1);
		printf("%d. no'lu ogrenci odev2: ",i+1);
		scanf("%f",&a_sinifi[i].odev2);
		printf("%d. no'lu ogrenci quiz1: ",i+1);
		scanf("%f",&a_sinifi[i].quiz1);
		printf("%d. no'lu ogrenci quiz2: ",i+1);
		scanf("%f",&a_sinifi[i].quiz2);
		printf("%d. no'lu ogrenci quiz3: ",i+1);
		scanf("%f",&a_sinifi[i].quiz3);
		printf("%d. no'lu ogrenci vize1: ",i+1);
		scanf("%f",&a_sinifi[i].vize1);
		printf("%d. no'lu ogrenci vize2: ",i+1);
		scanf("%f",&a_sinifi[i].vize2);
		printf("%d. no'lu ogrenci final: ",i+1);
		scanf("%f",&a_sinifi[i].final);
		odevtoplam=(a_sinifi[i].odev1 + a_sinifi[i].odev2)/2 * 0.05;
		quiztoplam=(a_sinifi[i].quiz1+ a_sinifi[i].quiz2 + a_sinifi[i].quiz3)/3 * 0.08;
		vizetoplam=(a_sinifi[i].vize1+a_sinifi[i].vize2)/2 * 0.13;
		finaltoplam=a_sinifi[i].final*0.40;
		a_sinifi[i].gecme_notu=odevtoplam+quiztoplam+vizetoplam+finaltoplam;
		printf("%f",a_sinifi[i].gecme_notu);
		dizi[i]=a_sinifi[i].gecme_notu;
		fprintf(fdosya,"%s\t",a_sinifi[i].ad);
    	fprintf(fdosya,"%f\n", a_sinifi[i].gecme_notu);
    }
	fclose(fdosya);
	for (i=0;i<boyut;i++) {
    for(j=0;j<boyut;j++) {
        if(dizi[i]>dizi[j]) {
            tut=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=tut;
        }
    }
}
printf("\n");
printf("\n");
printf("Dizi Buyukten Kucuge Siralamasi\n");
for(i=0;i<boyut;i++){
	printf("%f\n",dizi[i]);
}
	
	

	return 0;
}

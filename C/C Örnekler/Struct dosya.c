#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <dirent.h>
#include <locale.h>

struct Belge{
    char belge_ismi[100];
    char belge_turu[100];
    char belge_yolu[100];
    int belge_no;
};

struct Dosya{
    char dosya_ismi[100];
    char dosya_turu[100];
    char dosya_yolu[100];
    int dosyo_no;
};



void belge_ekle(){
   
    struct Belge belge;
    printf("Belge ismini giriniz:");scanf("%s",belge.belge_ismi);
    printf("Belge yolu giriniz:");scanf("%s",belge.belge_yolu);
    printf("Belge turunu giriniz:");scanf("%s",belge.belge_turu);
    printf("Belge numarasi giriniz:");scanf("%d",&belge.belge_no);
    if(belge.belge_ismi == NULL || belge.belge_yolu == NULL || belge.belge_turu == NULL){
        printf("Belge ady, belge yolu ve belge türü bilgilerini eksiksiz doldurun");
        return;
    }
    
    char filePath[100] = "";
    strcat(filePath, belge.belge_yolu);
    strcat(filePath, belge.belge_ismi);
    strcat(filePath, ".");
    strcat(filePath, belge.belge_turu);
    FILE *fp=fopen(filePath,"w");
    fclose(fp);
    printf("Belge eklendi: %s", filePath);
}

void dosya_olustur(){
    struct Dosya file;
    printf("Dosya ismini giriniz:");scanf("%s",file.dosya_ismi);
    printf("Dosya yolu giriniz:\n");scanf("%s",file.dosya_yolu);
    if(file.dosya_ismi == NULL || file.dosya_yolu == NULL){
        printf("Dosya adý ve dosya yolu bilgilerini eksiksiz doldurun");
        return;
    }

    int check = 0;
    char filePath[100] ="";
    strcat(filePath, file.dosya_yolu);
    strcat(filePath, file.dosya_ismi);
  
    check = mkdir(filePath);
  
    if (!check){
        printf("Dosya oluþturuldu!\n");
    }else {
        printf("Dosya oluþturulamadý!\n");
    }
}

void arama(){
    char isim[100];

    printf("Aranan Belgenin/Klasörün Ismini Giriniz:");scanf("%s",isim);
    
    DIR *dp;
    if((dp = opendir(isim)) != NULL) {
        printf("Aranan klasör bulundu: %s\n",isim);
        return;
    }
    
    FILE *fp;
    if((fp=fopen(isim,"r"))!= NULL){
        printf("Aranan belge bulundu: %s\n",isim);
        fclose(fp);
        return;
    }

    printf("Verilen isimde klasör yada belge bulunamadý: %s\n", isim);
}

void listele()
{
    char filePath[100];
    printf("Listelenecek klasör yolunu giriniz:");scanf("%s",filePath);
    DIR *d;
    struct dirent *dir;
    d = opendir(filePath);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
}

void sil(){
    char filePath[100];
    char yol[100];
    char dosyaIsmi[100];
    printf("Silinecek belgenin yolunu giriniz:");scanf("%s",yol);
    printf("Silinecek belgenin adýný giriniz:");scanf("%s",dosyaIsmi);
    strcat(filePath, yol);
    strcat(filePath, dosyaIsmi);
    int del = remove(filePath);
    if (!del)
        printf("Dosya silmesi baþarýlý");
    else
        printf("Dosya silinemedi!");
    
}

void menu(){
    struct Belge bilgi;
    int secim;
    
    while (1)
    {
        printf("1.Belge Ekle\n");
        printf("2.Listele\n");
        printf("3.Ara\n");
        printf("4.Sil\n");
        printf("5.Cikis\n");
        scanf("%d",&secim);
       
        switch (secim)
        {
        case 1:
            belge_ekle();
            break;
        case 2:
            listele();
            break;
        case 3:
            arama();
            break;
        case 4:
        	sil();
            break;
        case 5:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
        
    }
}


int main()
{
	setlocale(LC_ALL,"Turkish");
    menu();
    return 0;
}





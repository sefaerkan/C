//Kemal Hocam �ncelikle Selamlar ve Sayg�lar. �devde hatalar , eksikler olabilir ��z�m�n� bulamad���m hatalar ile kar��la�t�m.//
//Return deyimlerini yaparken internetten ve ba�ka yerlerden yard�m ald�m ��nk� hakim oldu�um bir konu de�ildi.//
//Sefa Erkan//

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
    int i=0; //Local bir i tan�mlad�m//

    float vergi_hesapla(int satis_fiyat, int vergi_tur) //�lk kullanaca��m�z fonksiyon.//
	{
	if(vergi_tur == 1) //Kontrol k�sm� y�zde 1 mi y�zde 8 ya da y�zde 18 mi vergi uygulanaca��na bak�yoruz.//
	{
	return (float)(satis_fiyat*1)/100; 
	}
	if(vergi_tur==2)  //Kontrol k�sm� y�zde 1 mi y�zde 8 ya da y�zde 18 mi vergi uygulanaca��na bak�yoruz.//
	{
	return (float)(satis_fiyat*8)/100; 
	}
	if(vergi_tur==3) //Kontrol k�sm� y�zde 1 mi y�zde 8 ya da y�zde 18 mi vergi uygulanaca��na bak�yoruz.//
	{
	return (float)(satis_fiyat*18)/100;  
	} 
    }
    
	float kar_hesapla(int alis_fiyati , int satis_fiyati , int vergi_tur) //�kinci olarak kullanaca��m�z ve kar hesaplamak i�in olu�turdu�um Fonksiyon//
	{
	return ((float)(satis_fiyati-alis_fiyati)/alis_fiyati)*100;  // Return ba�ka yerde kullanmak i�in ve float k�s�rat i�in mant�k ise sat��-al��/al�� * 100 olacak//
    }
    
	
	int urun_karlilik_grubu (int alis_fiyati, int satis_fiyati, int vergi_turu)  //���nc� olarak kullanaca��m�z ve gruplara ay�rmak i�in olu�turdu�um Fonksiyon//
	{
	int karyuzde=kar_hesapla(alis_fiyati,satis_fiyati,vergi_turu); // Bir �stte a�t���m�z fonksiyonu kullan�yoruz ��nk� bize k�r� hesaplad�//
	
	if(karyuzde>=20 && karyuzde<50) //Burada kar oran�n�n hangi de�er aral�klar�nda oldu�unu kontrol ediyoruz. Return deyimini kullan�yoruz ki main i�inde bu de�eri kullanabilelim.//
	{
	 return 5;
	}
	if(karyuzde>50 && karyuzde<=80) //Burada kar oran�n�n hangi de�er aral�klar�nda oldu�unu kontrol ediyoruz. Return deyimini kullan�yoruz ki main i�inde bu de�eri kullanabilelim.//
	{
	return 6; 
	}
	if(karyuzde>80)  //Burada kar oran�n�n hangi de�er aral�klar�nda oldu�unu kontrol ediyoruz. Return deyimini kullan�yoruz ki main i�inde bu de�eri kullanabilelim.//
	{
	return 7;
	}
	if(karyuzde<20) //Burada kar oran�n�n hangi de�er aral�klar�nda oldu�unu kontrol ediyoruz. Return deyimini kullan�yoruz ki main i�inde bu de�eri kullanabilelim.//
	{
	return 8;	
	}
    }
    

	int main() //Ana Fonksiyon �stte yazd���m�z t�m fonksiyonlar� burada �a��r�p kullanaca��z.//
	{ 
	
	int alis_fiyati[]={10, 2, 5, 7, 8, 3, 50, 10, 5, 4, 2, 7, 8, 45, 9, 21}; //16 tane �r�n�n al��  fiyatlar�m�z//
	int satis_fiyati[]={20, 5, 9, 12, 15, 6, 70, 17, 9, 7, 5, 14, 20, 80, 16, 7};  //16 tane �r�n�n sat��  fiyatlar�m�z//
	int vergi_tur []= {3, 1, 1, 2, 3, 1, 3, 3, 2, 1, 1, 2, 2, 2, 2, 3};  //16 tane �r�n�n vergi tutar�//
	int satis_adet[]= {22, 75, 12, 15, 50, 90, 33, 11, 30, 115, 44, 63, 10, 20, 3, 39};  //16 tane �r�n�n sat�� adedi//
	
	int vergi_tur2[]={0.18 , 0.1  , 0.1 , 0.8 , 0.18 , 0.18 , 0.8 , 0.1 , 0.1 , 0.8 ,0.8, 0.8, 0.8, 0.18}; //En fazla kar getiren ile en az kar getireni bulmak i�in a��lm��t�r//
	int enkarli[16];
	int i , min_sayi , max;
	char karakter_degisken='%';
    
	printf("\nUrunun Kodu");
    for(i=0; i<16; i++)
	{
    printf("\tUrun-%d",i+1); //Teker teker vergiler ile �r�nlerimizi altl� �stl� �ekilde yazd�r�yoruz//
    }
    printf("\n\n");
	printf("Vergi(Tane)",'%'); //Vergilerimizi tane olarak yazd�r�yoruz//
	for(i=0; i<16; i++)
	{
	printf("\t%.2f",vergi_hesapla(satis_fiyati[i],vergi_tur[i]));	
	}
	
	printf("\n\nUrunun Kodu"); //Burada �r�n Adlar�n� yazd�r�yoruz.//
	for(i=0;i<16;i++)
	{
	printf("\tUrun-%d",i+1); //�r�nleri teker teker yazd�rd���m�z k�s�m.//
	}	
	
	printf("\n");
	printf("Kar Orani(Urun)",'%'); //Burada teker teker kar oranlar�n� yazd�r�yoruz.//
	for(i=0;i<16;i++)
	{		
	printf("\t%.2f",kar_hesapla(alis_fiyati[i],satis_fiyati[i],vergi_tur[i]));
	}	
	
	printf("\n\n\nUrunun Kodu"); //Burada �r�n Adlar�n� yazd�r�yoruz.//
	for(i=0;i<16;i++)
	{
	printf("\tUrun-%d",i+1); //�r�nleri teker teker yazd�rd���m�z k�s�m.//
	}	
	printf("\n\n");
	printf("Kar Miktari",'%'); //�r�nlerin Kar miktarlar�n� yazd�raca��z.//
	for(i=0;i<16;i++)
	{	
	float vergimiktari=vergi_hesapla(satis_fiyati[i],vergi_tur[i]); //vergi hesapla Fonksiyonunu �a��r�yoruz//
	float karmiktari=((satis_fiyati[i] - alis_fiyati[i]) * vergi_tur[2]) * satis_adet[i]; // �a��rd���m�z vergi fonksiyonu ile kar miktar� mant��� �udur Sat�� - Al�� - Vergi'dir.//
	printf("\t%.2f",karmiktari); //Kar Miktarlar�n� yanyana yazd�r�yoruz//
	}
	printf("\n\n");
	printf("\nUrunun Kodu");
    for(i=0; i<16; i++)
	{
    printf("\tUrun-%d",i+1); //Teker teker vergiler ile �r�nlerimizi altl� �stl� �ekilde yazd�r�yoruz//
    }
    printf("\n\n");
    
	printf("\n");
	printf("Toplam Kar",'%');
	
	for(i=0 ; i<16; i++)
	{
	enkarli[i]= ((satis_fiyati[i] - alis_fiyati[i]) * vergi_tur[2]) * satis_adet[i]; //Sat�� Rakamlar�n� Kullanarak Toplam Kar� Buluyoruz. Mant�k ise Sat�� - Al�� -  //
	printf("\t%.2d", enkarli[i]);
    }
    min_sayi=enkarli[0]; // En k���k say�m�z� belirliyoruz//
    for(i=1;i<16;i++)
	{
    if(min_sayi>enkarli[i]) //En az kar getireni kar��la�t�rma yap�p buluyoruz//
	{
    min_sayi=enkarli[i]; //En az kar getireni buluyoruz//
    }
    }   
    max = enkarli[0]; // En b�y�k say�m�z� belirliyoruz//
    int boy = sizeof(enkarli)/sizeof(enkarli[0]);  // dizinin uzunlu�u
    for( i=1; i < boy;  i++)
    {
    if(enkarli[i] > max)  //En �ok kar getireni kar��la�t�rma yap�p buluyoruz//
    {
    max = enkarli[i];  //En �ok kar getireni buluyoruz//
    }
    }
    printf("\n");
    printf("\nEn cok kar getiren urunun kari %d tl dir!!",max); //En �ok kar getireni yazd�r�yoruz//
    printf("\n\n");
    printf("En az kar getiren urunun kari %d tl dir!!\n",min_sayi); //En az kar getireni yazd�r�yoruz//
	
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nBakliyat Kuruyemis Olanlar");
    printf("\n\nA grubu (%c20 - 50 kar getirenler):", karakter_degisken); //Burada A grubunu yazd�r�yoruz for d�ng�s� her bir �r�n� kontrol amac� ile a��lm��t�r.//
    for(i=0; i<16; i++)
	{
    int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
	if(yuzdelik==5) //E�er y�zdemiz en yukarda hesaplad���m�z fonksiyonda return 1 ise A grubundad�r burada onun kontrol� yap�l�yor.//
	{
	printf("\n %d. Urun.",i+1);
	}
	}
   	printf("\n\nIslenmis Olanlar");
	printf("\n\nB grubu (%c50 - 80 kar getirenler):", karakter_degisken); //Burada B grubunu yazd�r�yoruz for d�ng�s� her bir �r�n� kontrol amac� ile a��lm��t�r.//
	for(i=0;i<16;i++)
	{	
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
	if(yuzdelik==6)  //E�er y�zdemiz en yukarda hesaplad���m�z fonksiyonda return 2 ise B grubundad�r burada onun kontrol� yap�l�yor.//
	{
	printf("\n %d. Urun.",i+1);
	}
	}
	printf("\n\nDiger Olanlar");
	printf("\n\nC grubu (%c80 den fazla kar getirenler):", karakter_degisken); //Burada C grubunu yazd�r�yoruz for d�ng�s� her bir �r�n� kontrol amac� ile a��lm��t�r.//
	for(i=0;i<16;i++)
	{	
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
    if(yuzdelik==7) //E�er y�zdemiz en yukarda hesaplad���m�z fonksiyonda return 3 ise C grubundad�r burada onun kontrol� yap�l�yor.//
	{
	printf("\n %d. Urun,",i+1);
	}
	}
	printf("\n\nIkinciDiger Olanlar");
	printf("\n\nD grubu (%c20 den az kar getirenler):", karakter_degisken); //Burada D grubunu yazd�r�yoruz for d�ng�s� her bir �r�n� kontrol amac� ile a��lm��t�r.//
	for(i=0; i<16; i++)
	{
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
    if(yuzdelik==8) //E�er y�zdemiz en yukarda hesaplad���m�z fonksiyonda return 4 ise D grubundad�r burada onun kontrol� yap�l�yor.//
	{ 	
	printf("\n %d. Urun.",i+1);	
	}
    }
    return 0;
    }

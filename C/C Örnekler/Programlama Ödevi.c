//Kemal Hocam öncelikle Selamlar ve Saygýlar. Ödevde hatalar , eksikler olabilir çözümünü bulamadýðým hatalar ile karþýlaþtým.//
//Return deyimlerini yaparken internetten ve baþka yerlerden yardým aldým çünkü hakim olduðum bir konu deðildi.//
//Sefa Erkan//

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
    int i=0; //Local bir i tanýmladým//

    float vergi_hesapla(int satis_fiyat, int vergi_tur) //Ýlk kullanacaðýmýz fonksiyon.//
	{
	if(vergi_tur == 1) //Kontrol kýsmý yüzde 1 mi yüzde 8 ya da yüzde 18 mi vergi uygulanacaðýna bakýyoruz.//
	{
	return (float)(satis_fiyat*1)/100; 
	}
	if(vergi_tur==2)  //Kontrol kýsmý yüzde 1 mi yüzde 8 ya da yüzde 18 mi vergi uygulanacaðýna bakýyoruz.//
	{
	return (float)(satis_fiyat*8)/100; 
	}
	if(vergi_tur==3) //Kontrol kýsmý yüzde 1 mi yüzde 8 ya da yüzde 18 mi vergi uygulanacaðýna bakýyoruz.//
	{
	return (float)(satis_fiyat*18)/100;  
	} 
    }
    
	float kar_hesapla(int alis_fiyati , int satis_fiyati , int vergi_tur) //Ýkinci olarak kullanacaðýmýz ve kar hesaplamak için oluþturduðum Fonksiyon//
	{
	return ((float)(satis_fiyati-alis_fiyati)/alis_fiyati)*100;  // Return baþka yerde kullanmak için ve float küsürat için mantýk ise satýþ-alýþ/alýþ * 100 olacak//
    }
    
	
	int urun_karlilik_grubu (int alis_fiyati, int satis_fiyati, int vergi_turu)  //Üçüncü olarak kullanacaðýmýz ve gruplara ayýrmak için oluþturduðum Fonksiyon//
	{
	int karyuzde=kar_hesapla(alis_fiyati,satis_fiyati,vergi_turu); // Bir üstte açtýðýmýz fonksiyonu kullanýyoruz çünkü bize kârý hesapladý//
	
	if(karyuzde>=20 && karyuzde<50) //Burada kar oranýnýn hangi deðer aralýklarýnda olduðunu kontrol ediyoruz. Return deyimini kullanýyoruz ki main içinde bu deðeri kullanabilelim.//
	{
	 return 5;
	}
	if(karyuzde>50 && karyuzde<=80) //Burada kar oranýnýn hangi deðer aralýklarýnda olduðunu kontrol ediyoruz. Return deyimini kullanýyoruz ki main içinde bu deðeri kullanabilelim.//
	{
	return 6; 
	}
	if(karyuzde>80)  //Burada kar oranýnýn hangi deðer aralýklarýnda olduðunu kontrol ediyoruz. Return deyimini kullanýyoruz ki main içinde bu deðeri kullanabilelim.//
	{
	return 7;
	}
	if(karyuzde<20) //Burada kar oranýnýn hangi deðer aralýklarýnda olduðunu kontrol ediyoruz. Return deyimini kullanýyoruz ki main içinde bu deðeri kullanabilelim.//
	{
	return 8;	
	}
    }
    

	int main() //Ana Fonksiyon üstte yazdýðýmýz tüm fonksiyonlarý burada çaðýrýp kullanacaðýz.//
	{ 
	
	int alis_fiyati[]={10, 2, 5, 7, 8, 3, 50, 10, 5, 4, 2, 7, 8, 45, 9, 21}; //16 tane ürünün alýþ  fiyatlarýmýz//
	int satis_fiyati[]={20, 5, 9, 12, 15, 6, 70, 17, 9, 7, 5, 14, 20, 80, 16, 7};  //16 tane ürünün satýþ  fiyatlarýmýz//
	int vergi_tur []= {3, 1, 1, 2, 3, 1, 3, 3, 2, 1, 1, 2, 2, 2, 2, 3};  //16 tane ürünün vergi tutarý//
	int satis_adet[]= {22, 75, 12, 15, 50, 90, 33, 11, 30, 115, 44, 63, 10, 20, 3, 39};  //16 tane ürünün satýþ adedi//
	
	int vergi_tur2[]={0.18 , 0.1  , 0.1 , 0.8 , 0.18 , 0.18 , 0.8 , 0.1 , 0.1 , 0.8 ,0.8, 0.8, 0.8, 0.18}; //En fazla kar getiren ile en az kar getireni bulmak için açýlmýþtýr//
	int enkarli[16];
	int i , min_sayi , max;
	char karakter_degisken='%';
    
	printf("\nUrunun Kodu");
    for(i=0; i<16; i++)
	{
    printf("\tUrun-%d",i+1); //Teker teker vergiler ile ürünlerimizi altlý üstlü þekilde yazdýrýyoruz//
    }
    printf("\n\n");
	printf("Vergi(Tane)",'%'); //Vergilerimizi tane olarak yazdýrýyoruz//
	for(i=0; i<16; i++)
	{
	printf("\t%.2f",vergi_hesapla(satis_fiyati[i],vergi_tur[i]));	
	}
	
	printf("\n\nUrunun Kodu"); //Burada Ürün Adlarýný yazdýrýyoruz.//
	for(i=0;i<16;i++)
	{
	printf("\tUrun-%d",i+1); //Ürünleri teker teker yazdýrdýðýmýz kýsým.//
	}	
	
	printf("\n");
	printf("Kar Orani(Urun)",'%'); //Burada teker teker kar oranlarýný yazdýrýyoruz.//
	for(i=0;i<16;i++)
	{		
	printf("\t%.2f",kar_hesapla(alis_fiyati[i],satis_fiyati[i],vergi_tur[i]));
	}	
	
	printf("\n\n\nUrunun Kodu"); //Burada Ürün Adlarýný yazdýrýyoruz.//
	for(i=0;i<16;i++)
	{
	printf("\tUrun-%d",i+1); //Ürünleri teker teker yazdýrdýðýmýz kýsým.//
	}	
	printf("\n\n");
	printf("Kar Miktari",'%'); //Ürünlerin Kar miktarlarýný yazdýracaðýz.//
	for(i=0;i<16;i++)
	{	
	float vergimiktari=vergi_hesapla(satis_fiyati[i],vergi_tur[i]); //vergi hesapla Fonksiyonunu çaðýrýyoruz//
	float karmiktari=((satis_fiyati[i] - alis_fiyati[i]) * vergi_tur[2]) * satis_adet[i]; // Çaðýrdýðýmýz vergi fonksiyonu ile kar miktarý mantýðý þudur Satýþ - Alýþ - Vergi'dir.//
	printf("\t%.2f",karmiktari); //Kar Miktarlarýný yanyana yazdýrýyoruz//
	}
	printf("\n\n");
	printf("\nUrunun Kodu");
    for(i=0; i<16; i++)
	{
    printf("\tUrun-%d",i+1); //Teker teker vergiler ile ürünlerimizi altlý üstlü þekilde yazdýrýyoruz//
    }
    printf("\n\n");
    
	printf("\n");
	printf("Toplam Kar",'%');
	
	for(i=0 ; i<16; i++)
	{
	enkarli[i]= ((satis_fiyati[i] - alis_fiyati[i]) * vergi_tur[2]) * satis_adet[i]; //Satýþ Rakamlarýný Kullanarak Toplam Karý Buluyoruz. Mantýk ise Satýþ - Alýþ -  //
	printf("\t%.2d", enkarli[i]);
    }
    min_sayi=enkarli[0]; // En küçük sayýmýzý belirliyoruz//
    for(i=1;i<16;i++)
	{
    if(min_sayi>enkarli[i]) //En az kar getireni karþýlaþtýrma yapýp buluyoruz//
	{
    min_sayi=enkarli[i]; //En az kar getireni buluyoruz//
    }
    }   
    max = enkarli[0]; // En büyük sayýmýzý belirliyoruz//
    int boy = sizeof(enkarli)/sizeof(enkarli[0]);  // dizinin uzunluðu
    for( i=1; i < boy;  i++)
    {
    if(enkarli[i] > max)  //En çok kar getireni karþýlaþtýrma yapýp buluyoruz//
    {
    max = enkarli[i];  //En çok kar getireni buluyoruz//
    }
    }
    printf("\n");
    printf("\nEn cok kar getiren urunun kari %d tl dir!!",max); //En çok kar getireni yazdýrýyoruz//
    printf("\n\n");
    printf("En az kar getiren urunun kari %d tl dir!!\n",min_sayi); //En az kar getireni yazdýrýyoruz//
	
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nBakliyat Kuruyemis Olanlar");
    printf("\n\nA grubu (%c20 - 50 kar getirenler):", karakter_degisken); //Burada A grubunu yazdýrýyoruz for döngüsü her bir ürünü kontrol amacý ile açýlmýþtýr.//
    for(i=0; i<16; i++)
	{
    int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
	if(yuzdelik==5) //Eðer yüzdemiz en yukarda hesapladýðýmýz fonksiyonda return 1 ise A grubundadýr burada onun kontrolü yapýlýyor.//
	{
	printf("\n %d. Urun.",i+1);
	}
	}
   	printf("\n\nIslenmis Olanlar");
	printf("\n\nB grubu (%c50 - 80 kar getirenler):", karakter_degisken); //Burada B grubunu yazdýrýyoruz for döngüsü her bir ürünü kontrol amacý ile açýlmýþtýr.//
	for(i=0;i<16;i++)
	{	
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
	if(yuzdelik==6)  //Eðer yüzdemiz en yukarda hesapladýðýmýz fonksiyonda return 2 ise B grubundadýr burada onun kontrolü yapýlýyor.//
	{
	printf("\n %d. Urun.",i+1);
	}
	}
	printf("\n\nDiger Olanlar");
	printf("\n\nC grubu (%c80 den fazla kar getirenler):", karakter_degisken); //Burada C grubunu yazdýrýyoruz for döngüsü her bir ürünü kontrol amacý ile açýlmýþtýr.//
	for(i=0;i<16;i++)
	{	
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
    if(yuzdelik==7) //Eðer yüzdemiz en yukarda hesapladýðýmýz fonksiyonda return 3 ise C grubundadýr burada onun kontrolü yapýlýyor.//
	{
	printf("\n %d. Urun,",i+1);
	}
	}
	printf("\n\nIkinciDiger Olanlar");
	printf("\n\nD grubu (%c20 den az kar getirenler):", karakter_degisken); //Burada D grubunu yazdýrýyoruz for döngüsü her bir ürünü kontrol amacý ile açýlmýþtýr.//
	for(i=0; i<16; i++)
	{
	int yuzdelik = urun_karlilik_grubu (alis_fiyati[i], satis_fiyati[i], vergi_tur[i]);
    if(yuzdelik==8) //Eðer yüzdemiz en yukarda hesapladýðýmýz fonksiyonda return 4 ise D grubundadýr burada onun kontrolü yapýlýyor.//
	{ 	
	printf("\n %d. Urun.",i+1);	
	}
    }
    return 0;
    }

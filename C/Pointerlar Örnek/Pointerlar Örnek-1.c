#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
     int i=5;
     int *p=&i;
     
     printf("%p\n",p);
     printf("%u\n",p); //Ramdeki, bellekteki yerini yazdýrýyor.
     printf("%d",*p);  //Deðerini yani 5'i yazdýrýr.
     
     // & deðiþkenin adres bilgisini yazdýrýr.
     // * adresteki deðeri verdirir.





	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
     int i=5;
     int *p=&i;
     
     printf("%p\n",p);
     printf("%u\n",p); //Ramdeki, bellekteki yerini yazd�r�yor.
     printf("%d",*p);  //De�erini yani 5'i yazd�r�r.
     
     // & de�i�kenin adres bilgisini yazd�r�r.
     // * adresteki de�eri verdirir.





	return 0;
}

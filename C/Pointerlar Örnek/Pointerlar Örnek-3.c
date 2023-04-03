#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i , j=1;
	
	int *jp1 , *jp2=&j;
	
	jp1=jp2; // ikiside ayný yere eþitleniyor
	
	i=++(*jp2); // i artarken jp2 de artýyor
	
	*jp2= *jp1 + i; // jp1+i=jp2 oluyor ve jp1 ve jp2 ayný yere eþitli olduðu için ikisde 4 oluyor yani j= 4 , i ise 2 oluyor.
	
	printf("i= %d , j= %d , jp1= %d , jp2= %d\n", i , j , *jp1 , *jp2);
	
	
	
	
	return 0;
}

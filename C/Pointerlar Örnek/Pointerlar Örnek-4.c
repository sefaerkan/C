#include <stdio.h>
#include <stdlib.h>

void degistir(int a , int b)
{
	int gecici=a;
	
	a=b;
	
	b=gecici;
	
	//Bu ��leme Call by Value denir. X ve y de�i�mez sadece de�eri yerine ge�en a ve b de�i�ir.
	
	printf("a:%d b:%d\n", a , b);
}
int main() 
{
	int x=5 , y=10;
	
	degistir(x,y);
	
	printf("x:%d y:%d", x ,y);
	
	return 0;
}

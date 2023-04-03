#include <stdio.h>
#include <stdlib.h>

void degistir(int a , int b)
{
	int gecici=a;
	
	a=b;
	
	b=gecici;
	
	//Bu Ýþleme Call by Value denir. X ve y deðiþmez sadece deðeri yerine geçen a ve b deðiþir.
	
	printf("a:%d b:%d\n", a , b);
}
int main() 
{
	int x=5 , y=10;
	
	degistir(x,y);
	
	printf("x:%d y:%d", x ,y);
	
	return 0;
}

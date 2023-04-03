#include <stdio.h>
#include <stdlib.h>

void degistir(int *a , int *b)
{
	int gecici=*a;
	*a=*b;
	*b=gecici;
	
}

// Bu sefer a ve b direkt x ve y nin yerlerini aldýðý için x ve y de deðiþiyor.

int main()
{
	int x=5 , y=10;
	
	degistir(&x, &y);
	
	printf("x:%d y:%d", x, y);
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int carp(int matris[] , int size)
{
	int i=0;
	int carpim=1;
	for(; i<size ; i++)
{
	carpim *= matris[i];	
}
	return carpim;
	
	
}

int main() 
{
	int sayilar[5]={1,2,3,4,5};	
	
	printf("%d",carp(sayilar,5));
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matris[i][j]);
		}
    printf("\n");    	
	}
	
	return 0;
}
/*
�nceden belirli dizilerden matris olu�turma
*\

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, t=0, temp;
	printf("Bir sayý giriniz:");
	scanf("&d", &n);
	temp=n ;
	while(temp != 0)
	{
		t=t*10;
		t=t+temp%10;
		temp = temp/10;
		}
	if (n == t) printf("%d Polindromik bir sayýdýr\n", n);
	else printf("%d Polindromik sayý deðildir\n", n);
	return 0;
}

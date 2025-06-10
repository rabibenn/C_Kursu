#include<stdio.h>
#include<stdlib.h>
#define MESAJ "Hi World"

//define ile mesaj gördüğümüz her yere Hi World yazmasını sağlıyoruz.

int main()
{
	const int sayi = 19; //const sabittir ve değiştirilemez.
	
	printf("%d\n", sayi);
	
	printf("%s\n", MESAJ);

	return 0;
}

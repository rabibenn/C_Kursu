#include<stdio.h>
#include<stdlib.h>

int main(){

	//Type Casting: Başka bir değişkenin tipini cast etme işlemidir.(geçici veri türü dönüştürme)

	/*
	int a = 9/4;
	printf("%d", a);

	Çıktı: 2

	float b = 9/4;
	printf("%d", b);

	Çıktı: 2.000000


	//integer değeri integer bir değere böldüğümüz için çıkan sonucun değişkenin türü ile bir alakası yok.
	*/

	float sayi = (float) 9/4;
	printf("%.2f", sayi);

	return 0;

}

#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 17
	//Sayı Oluşturma
	
	int x, y, z, sayi;

	printf("yuzler basamagiini giriniz: ");
	scanf("%d", &x);
	printf("onlar basamagini giriniz: ");
	scanf("%d", &y);
	printf("birler basamagini giriniz: ");
	scanf("%d", &z);

	sayi = x*100 + y*10 + z;

	printf("olusturulan sayiniz: %d", sayi);

	return 0;

}

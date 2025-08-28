#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 2
	//Kullanıcıdan iki adet tam sayı değeri alın ve bu değerleri ekrana bastırın
	
	int sayi1, sayi2;

	printf("Birinci sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);

	printf("Girdiğiniz ilk sayi: %d\n", sayi1);
	printf("Girdiğiniz ikinci sayi: %d\n", sayi2);

	return 0;

}

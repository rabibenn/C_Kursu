#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 20
	//İki tam sayı kıyaslaması
	
	int sayi1, sayi2;

	printf("Lutfen iki adet tam sayi giriniz.\n");
	scanf("%d%d", &sayi1, &sayi2);

	if(sayi1>sayi2){
		printf("ilk sayi ikinci sayidan buyuktur.");
	}
	else if(sayi2>sayi1){
		printf("ilk sayi ikinci sayidan kucuktur.");
	}
	else{
		printf("sayilar esittir.");
	}

	return 0;

}

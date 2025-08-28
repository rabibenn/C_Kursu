#include<stdio.h> 
#include<stdlib.h>


int main() {

	//Exercise 3
	//Kullanıcıdan iki adet sayı alın ve bu sayıların çarpımını ekrana bastırın.
	
	int sayi1, sayi2, carpim;

	printf("iki adet sayi giriniz: \n");
	scanf("%d%d", &sayi1, &sayi2);

	carpim = sayi1*sayi2;

	printf("girdiginiz iki sayinin carpimi: %d", carpim);

	return 0;

}

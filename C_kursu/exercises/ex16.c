#include<stdio.h>
#include<stdlib.h>


int main() {

	//Exercise 16
	//3 sayının ortalaması
	

	float a, b, c, ort;

	printf("3 adet sayi giriniz. \n");
	scanf("%f%f%f", &a, &b, &c);

	ort = (a+b+c)/3;

	printf("girdiginiz 3 sayinin ortalaması: %.2f", ort);

	return 0;

}

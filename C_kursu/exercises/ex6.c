#include<stdio.h> 
#include<stdlib.h>


int main(){

	//Exercise 6
	//Fahrenheit olarak alınan değeri Celcius'a çevirip ekrana bastırın
	//C = (F - 32) * 5/9
	
	float fahrenheit, celcius;

	printf("Fahrenheit değerini giriniz: ");
	scanf("%f", &fahrenheit);

	celcius = (fahrenheit - 32) * 5/9;

	printf("Celcius değeri: %.2f", celcius);

	return 0;

}


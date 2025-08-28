#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 11
	//Bir arabanın gittiği yolu mil cinsinden alarak km'ye çevirip ekrana bastırın
	//1 mil = 1.609 km
	
	 float mil, km;

	 printf("Aracınızın gittiği yolu mil cinsinden giriniz: ");
	 scanf("%f", &mil);

	 km = mil*1.609;

	 printf("Aracınızın gittiği yol %.2f km.", km);

	return 0;

}

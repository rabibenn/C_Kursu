#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 13
	//Havuzun enini, boyunu ve yüksekliğini metre olarak alın ve havuzun dolmasını için ne kadar su gerektiğini bulup ekrana bastırın
	
	float en, boy, yukseklik, sonuc;
	
	printf("Havuzunuzun enini, boyunu ve yuksekligini sirasiyla metre cinsinden giriniz.\n");
	scanf("%f%f%f", &en, &boy, &yukseklik);

	sonuc = en*boy*yukseklik;

	printf("Havuzunuzun dolmasi icin %.2f metrekup su gereklidir.", sonuc);

	return 0;

}

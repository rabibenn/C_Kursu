#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 9
	//Kullanıcıdan f(x) değerini alarak "f(x) = x^3 + 13x^2 + 47x + 5" fonksiyonunu hesaplayıp ekrana bastırın
	
	float x, sonuc;

	printf("f(x) degerini giriniz. ");
	scanf("%f", &x);

	sonuc = x*x*x + 13*x*x + 47*x + 5;

	printf("f(%.1f) = %.2f", x, sonuc);

	return 0;

}

#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 24
	//İki sayının çarpımının pozitif mi negatif mi olduğunu bulma
	
	int a, b, carpim;

	printf("iki sayi giriniz. \n");
	scanf("%d%d", &a, &b);

	carpim = a*b;

	if(carpim>0){
		printf("sayilarinizin carpimi pozitiftir.");
	}
	else if(carpim<0){
		printf("sayilarinizin carpimi negatiftir.");
	}
	else{
		printf("sayilarinizin carpimi sifira esittir.");
	}

	return 0;

}

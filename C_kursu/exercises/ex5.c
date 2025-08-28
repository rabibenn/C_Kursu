#include<stdio.h>


int main() {

	//Exercise 5
	//Dikdörtgenin alanını ve çevresini hesaplayıp ekrana bastırın

	int kisakenar, uzunkenar, alan, cevre;

	printf("Dikdörtgeninizin kisa kenarinin uzunlugunu giriniz: ");
	scanf("%d", &kisakenar);
	printf("Dikdörtgeninizin uzun kenarinin uzunlugunu giriniz: ");
	scanf("%d", &uzunkenar);

	if(kisakenar<uzunkenar){

	        alan = kisakenar*uzunkenar;
	        cevre = 2*kisakenar+2*uzunkenar;

	        printf("Cevre: %d\n", cevre);
	        printf("Alan: %d\n", alan);

	}

	else{
		printf("Kenar uzunluklarını kontrol ediniz.");
	}

	return 0;

}

#include<stdio.h>

int main() {

	//Exercise 10
	//Karenin alanını ve çevresini hesaplayıp ekrana bastırın

	int kenar, alan, cevre;

	printf("Karenizin bir kenar uzunlugunu giriniz: ");
	scanf("%d", &kenar);

	alan = kenar*kenar;
	cevre = 4*kenar;

	printf("Cevre: %d\n", cevre);
	printf("Alan: %d\n", alan);

	return 0;

}

#include<stdio.h>

int main() {

	//Exercise 12
	//Dairenin alanını ve çevresini hesaplayıp ekrana bastırın

        double yaricap, alan, cevre;
	double pi = 3.14;

	printf("Darienizin yaricapini giriniz: ");
	scanf("%lf", &yaricap);

        alan = pi*yaricap*yaricap;
	cevre = 2*pi*yaricap;

        printf("Cevre: %.2lf\n", cevre);
        printf("Alan: %.2lf\n", alan);	

	return 0;

}

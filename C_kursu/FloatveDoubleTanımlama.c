#include<stdio.h>

int main() 
{
	float sayi1 = 5.65;
	printf("%f", sayi1);

	float sayi2 = 4.45;
	printf ("%.3f", sayi2);

	// .3 virgülden sonra kaç basamak olacağını belirtmemizi sağlar.


	double sayi3 = 7.49;
	printf("%lf", sayi3);

	double sayi4 = 2.89;
        printf("%.2lf", sayi4);

	printf("\n")
	printf("1. sayim: %.2f  2. sayim: %.2lf", sayi1, sayi4);

}

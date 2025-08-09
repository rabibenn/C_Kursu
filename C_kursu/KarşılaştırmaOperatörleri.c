#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	   Karşılaştırma(Comparison) Operatörleri
	      <, >, ==, !=, <=, >=
	*/


	int x = 25;
	int y = 20;
	int z = 25;

	printf("%d \n", x == y); //0
	printf("%d \n", x == z); //1
	printf("%d \n", z != y);
	printf("%d \n", y < x);



	return 0;
}

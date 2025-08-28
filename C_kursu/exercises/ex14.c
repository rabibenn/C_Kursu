#include<stdio.h>
#include<stdlib.h>


int main() {

	//Exercise 14
	//İki sayının yer değiştirmesi
	
	int a, b, gecici;
	
	printf("a ve b sayilarini sirasiyla giriniz. \n");
	scanf("%d%d", &a,&b);

	printf("yer degistirmeden once \n");
	printf("a: %d \n", a);
	printf("b: %d \n", b);

	gecici = a;
	a = b;
	b = gecici;

	printf("yer degistirdikten sonra \n");
	printf("a: %d \n", a);
	printf("b: %d \n", b);

	return 0;

}

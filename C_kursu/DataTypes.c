
/* Data Types
 * Basic
 * Derived
 * Enumeration
 * Void
 *
 * Basic: int, char, float, double
 *
 * int (4 bytes) | %d
 * double (8 bytes) | %lf
 * float (4 bytes) | %f
 * char (1 bytes) | %c
 *
 *
 * Derived: array, pointer, structure, union
 * Enumeration: enum
 * Void: void,
 *
 * 
 * */

#include<stdio.h>

int main()
{
	int sayi1 = 15;
	int sayi2;
	sayi2 = 19;
	int sayi3 = 28, sayi4 = 32;

	printf("%d  %d  %d  %d\n", sayi1, sayi2, sayi3, sayi4);


	//SizeOf
	double fiyat = 49.99;
	float boy = 1.58;
	int yas = 19;
	char basharf = 'R';

	printf("fiyat degiskeni hafizada %d byte kadar yer tutar.\n", sizeof(fiyat));
	printf("double hafizada %d byte kadar yer tutar.\n", sizeof(double));
	printf("char hafizada %d byte kadar yer tutar.\n", sizeof(char));
        printf("float hafizada %d byte kadar yer tutar.\n", sizeof(float));
        printf("int hafizada %d byte kadar yer tutar.\n", sizeof(int));


	return 0;

}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	   Mantıksal(Logical) Operatörler
	            &&, ||, ! 
	 
        */

	int x = 25;
	int y = 20;

	printf("%d \n", x > 10 && x < 30);
	printf("%d \n", y < 10 || x > 30);
	printf("%d \n", !(y < 10 || x > 30));


	return 0;
}

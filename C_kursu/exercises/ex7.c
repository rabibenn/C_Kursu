#include<stdio.h>
#include<stdlib.h>


int main() {

	//Exercise 7
	//Kullanıcıdan a, b, c ve x değerlerini alarak "ax^2 + bx + c" işleminin sonucunu bulup ekrana bastırın
	
	int a, b, c, x, sonuc;

	printf("ax^2 +  bx + c denklemine yerlestirmek için sirasiyla a, b, c ve x degerlerini giriniz.\n");

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	printf("x: ");
	scanf("%d", &x);

	sonuc = a*x*x + b*x + c;

	printf("Denkleminizin sonucu: %d", sonuc);

	return 0;

}

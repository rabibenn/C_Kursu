#include<stdio.h>

int main() {

	int sayi1, sayi2, toplam;

	printf("ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);

	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);

	toplam = sayi1 + sayi2;

	printf("%d + %d = %d", sayi1, sayi2, toplam);

	return 0;

}

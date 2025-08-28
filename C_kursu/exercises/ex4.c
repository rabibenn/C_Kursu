#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 4
	//Bölünen ve böleni kullanıcıdan alarak bölüm ve kalanı bulup ekrana bastırın
	
	int bolunen, bolen, bolum, kalan;

        printf("Boluneni giriniz: ");
        scanf("%d", &bolunen);
	printf("Boleni giriniz: ");
	scanf("%d", &bolen);

	bolum = bolunen/bolen;
	kalan = bolunen%bolen;

	printf("Bolum: %d\n", bolum);
	printf("Kalan: %d\n", kalan);

	return 0;

}

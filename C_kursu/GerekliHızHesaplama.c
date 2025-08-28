#include<stdio.h>

int main() {

	//Gidilecek mesafeyi ve gidilmesi gereken süreyi girince gereken sürede varılabilmesi için gerekli hızı hesaplayan programı yazınız.
	
	float mesafe, sure, hiz;
	
	printf("Gideceginiz mesafeyi km cinsinden giriniz: ");
	scanf("%f", &mesafe);
	printf("Gitmeniz gereken süreyi saat olarak giriniz: ");
	scanf("%f", &sure);

	hiz = mesafe/sure;

	printf("İstediğiniz sürede varmanız içim gerekli hız: %.2f", hiz);

	return 0;

}

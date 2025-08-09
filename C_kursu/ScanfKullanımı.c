#include<stdio.h>
#include<stdlib.h>

//Scanf nedir?
//C programlama dilinde kullanıcıdan veri almak için kullanılan bir standart kütüphane fonksiyonudur. 
//stdio.h kütüphanesi içinde tanımlıdır.

int main()
{
	/*
	
	int sayi;

	printf("Lutfen bir sayi giriniz.\n");

	scanf("%d", &sayi);

	printf("Girdigimiz sayi: %d", sayi);





	float sayi;

        printf("Lutfen bir sayi giriniz.\n");

        scanf("%f", &sayi);

        printf("Girdigimiz sayi: %.2f", sayi);





	double sayi;

        printf("Lutfen bir sayi giriniz.\n");

        scanf("%lf", &sayi);

        printf("Girdigimiz sayi: %.2lf", sayi);





        char sayi;

        printf("Lutfen bir karakter giriniz.\n");

        scanf("%c", &sayi);

        printf("Girdigimiz karakter: %c", sayi);

	*/



	//Kullanıcıdan 2 adet sayı ve isminin baş harfini alınız ve ekrana tek tek yazdırınız.

	int sayi;
	printf("Lutfen ilk sayiyi giriniz.\n");
	scanf("%d", &sayi);

	double sayi2;
	printf("Lutfen ikinci sayiyi giriniz.\n");
	scanf("%lf", &sayi2);

	char basharf;
	printf("Lutfen isminizin bas harfini giriniz.\n");
	scanf(" %c", &basharf);

	printf("Ilk Sayi: %d \n", sayi);
	printf("Ikinci Sayi : %.2lf \n", sayi2);
	printf("Isminizin Bas Harfi: %c \n", basharf); 



	return 0;

}

#include<stdio.h>
#include<stdlib.h>

int main()
{

	/*
	   if(condition)
	   {
	     //codes
	   }
	   else if(condition)
	   {
	     //codes
	   }
	   else
	   {
	     //codes
	   }
        */


	/*
	int x = 55;
	int y = 43;

	if(x > y)
	{
		printf("x buyuktur.");
	}
	else if(x < y)
	{
		printf("y buyuktur.");
	}
	else
	{
		printf("iki sayi esittir.");
	}
	*/


	/*
	int x;
	int y;

	printf("x sayisini giriniz: \n");
	scanf("%d", &x);

	printf("y sayisini giriniz: \n");
	scanf("%d", &y);

	if(x < y)
	{
		printf("x kucuktur.");
	}
	else if(y < x)
	{
		printf("y kucuktur.");
	}
	else
	{
		printf("iki sayi esittir.");
	}
	*/


	/*

	//Kullanıcıdan 3 adet sayı alıp en büyük sayıyı bulup ekrana yazdırın.

	int sayi1;
	int sayi2;
	int sayi3;

	printf("1. sayiyi giriniz: \n");
	scanf("%d", &sayi1);

	printf("2. sayiyi giriniz: \n");
	scanf("%d", &sayi2);

	printf("3. sayiyi giriniz: \n");
	scanf("%d", &sayi3);


	if(sayi1 > sayi2 && sayi1 > sayi3)
	{
		printf("1. sayi en buyuk sayidir.");
	}
	else if(sayi2 > sayi1 && sayi2 > sayi3)
	{
		printf("2.sayi en buyuk sayidir.");
	}
	else if(sayi3 > sayi1 && sayi3 > sayi2)
	{
		printf("3. sayi en buyuk sayidir.");
	}
	else
	{
		printf("sayilar  esit olabilir.");
	}
	*/



	/*
	//Kullanıcının yazdığı sayının tek mi çift mi olduğunu ekrana yazdırın.
	
	int sayi;

	printf("Bir sayi giriniz: \n");
	scanf("%d", &sayi);

	if(sayi % 2 == 0)
	{
		printf("Girdiginiz sayi cift sayidir.");
	}
	else
	{
		printf("Girdiginiz sayi tek sayidir.");
	}
	*/




	/*
	//Kişinin yasal olarak oy kullanıp kullanamayacağını ekrana yazdırın.
	
	int yas;

	printf("Yasinizi giriniz: \n");
	scanf("%d", &yas);

	if(yas >= 18)
	{
		printf("Oy kullanabilirsiniz.");
	}
	else
	{
		printf("Oy kullanamazsınız.");
	}
	*/




	/*
	//Kullanıcıdan iki sayı alıp sıralama şeklinde ekrana yazdırınız.
	
	int a, b;

	printf("Lutfen iki adet sayi giriniz: \n");
	scanf("%d %d", &a, &b);

	if(a > b)
	{
		printf("Sonuc: %d > %d", a, b);
	}
	else if(a < b)
	{
		printf("Sonuc: %d <  %d", a, b);
	}
	else
	{
		printf("Sonuc: %d = %d", a, b);
	}
	*/



	//İç içe if kullanımı;
	
	int sayi1, sayi2;
	
	printf("Lutfen iki adet sayi giriniz: \n");
	scanf("%d %d", &sayi1, &sayi2);

	if(sayi1 >= sayi2)
	{
		if(sayi1 > sayi2)
		{
			printf("Sonuc: %d > %d", sayi1, sayi2);
		}
		else
		{
			printf("Sonuc: %d = %d", sayi1, sayi2);
		}
	}
	else
	{
		printf("Sonuc: %d < %d", sayi1, sayi2);
	}




	return 0;
}

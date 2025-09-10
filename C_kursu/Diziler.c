#include<stdio.h>
#include<stdlib.h>


int main(){

	/*
	 Diziler
         
         Dizi: Aynı tipten oluşan elemanlar tek bir isimle ifade edilmesidir. 
	 Çok boyutlu ve tek boyutlu olarak iki tipten oluşur.

	 Tüm dizilofoferde bulunan özellikler
	 -Eleman tipi
	 -Dizinin ismi
	 -Dizinin boyutu
	 
	 Diziler hafızada n * s byte kadar yer tutar.
         n: Eleman sayısı, tablo boyutu.
         s: Değişken tipinin hafızada tuttuğu byte.

	 sizeof(dizi) ile dizinin boyutu öğrenilebilir.

	 Dizi elemanlarını bastırırken elemanın dizi içindeki pozisyonunu kullanmamız gerekir.
	 */

	
	//Tek Boyutlu Diziler

	/*
	//Örnek
	int dizi[4] = {2, 4, 6, 8};
	 
	printf("%d", dizi[0]);
	

	//Örnek
	int dizi[10];
	int i;

	for(i=0;i<10;i++)
	{
		dizi[i] = 2*i; 
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n", dizi[i]);
	}
	*/



	//Dizi Elemanlarına Yeni Değer Atamak
	/*
	int dizi[5] = {19, 10, 8, 17, 9};
	int i;

	dizi[2] = 18;
	dizi[3] = 1;

	for(i=0;i<5;i++)
	{
		printf("%d ", dizi[i]);
	}
	*/



	//Kullanıcıdan Değer Alma ve Bastırma
	
	//FOR
	/*
	int sayilarim[3];

	printf("Dizi Elemanlarini Giriniz. \n");

	for(int i=0;i<3;i++)
	{
		scanf("%d", &sayilarim[i]);
	}
	for(int i=0;i<3;i++)
	{
		printf("%d \n", sayilarim[i]);
	}
	*/


	//WHILE
	/*
	int sayilarim[3];
	int i = 0;

	printf("Dizi Elemanlarini Giriniz. \n");

	while(i<3)
	{
		scanf("%d", &sayilarim[i]);
		i++;
	}
	
	i = 0;
	while(i<3)
	{
		printf("%d \n", sayilarim[i]);
		i++;
	}
	*/


	//DO-WHILE
	/*
	int sayilarim[3];
	int i = 0;

	printf("Dizi Elemanlarini Giriniz. \n");

	do
	{
		scanf("%d", &sayilarim[i]);
		i++;
	}while(i<3);

	i = 0;
	do
	{
		printf("%d \n", sayilarim[i]);
		i++;
	}while(i<3);
	*/



	//Çok Boyutlu Diziler
	//Matris Oluştumak için kullanılırlar.
	//Kodların hafızada tutulan kısmının doğrusal olmasına karşın çok boyutlu diziler doğrusal değildir.
	//Çok boyutlu dizileri doğrusal yapmak için dizinin dizisi şeklinde yazılmalıdır.
	//Dizinin içinde dizi: Bir dizinin içindeki tüm elemanların dizi olması durumu.
	//

	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//DÖNGÜLER
	

	/*For Döngüsü
	for(initializationStatement(başlatma ifadesi); testExpression(koşul ifadesi); updateStatement(güncelleme ifadesi)) 
	{
	   //statememts inside the body of loop(döngü gövdesi içindeki ifadeler)
	}
	
	Örnek
	  for(int i = 0; i < 3; i++)
	  {
	    printf("Merhaba\n");
	  }
	Çıktı
	  Merhaba
	  Merhaba
	  Merhaba



	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d \n", i);
	}


	int a;
	
	for(a = 1; a <= 10; a++)
	{
		printf("%d \n", a);
	}
	*/




	/*
	//1'den kullanıcının girdiği sayıya kadar olan sayıların toplamını hesaplayıp ekrana yazdırın.
	
	int sayi;
	int i,  toplam = 0;  //toplam değişkenine 0 verme sebebimiz toplama işleminin doğru başlamasını sağlamaktır.

	printf("Bir sayi giriniz: \n");
	scanf("%d", &sayi);

	for(i = 1; i <= sayi; i++)
	{
		printf("%d \n", i);
		toplam = toplam + i;
	}

	printf("Toplam: %d", toplam);
	*/




	/*
	//For Döngüsü Artış Değeri
	//0'dan 10'a kadar olan çift sayıları for döngüsü ile ekrana yazdırın.
	

	int i;

	for(i = 0; i <= 10; i += 2)
	{
		printf("%d \n", i);
	}
	*/

	


	/*While Döngüsü
	 while(koşul)
	 {
	   //the body of the loop.
	 }

	 Örnek
	   int i = 0;
	   while(i < 5)
	   {
	     printf("%d \n", i);
	     i++;   //Bu satır yazılmazsa i hep 0 kalacağı için sonsuz döngü oluşur ve ekrana sürekli 0 yazdırılır.
	   }
	 Çıktı
	   0
	   1
	   2
	   3
	   4


	 int i = 0;

	 while(i < 10)
	 {
	   printf("%d \n", i);
	   i++;
	 }

        


	//Kullanıcıdan alınan sayının katlarını yazdırsan programı yazınız.
	
	int sayim;

	printf("Bir sayi giriniz: \n");
	scanf("%d", &sayim);

	int i = 1;

	while(i <= 10){
		printf("%d \n", i * sayim);
		i++;
	}



	//0'dan 10'a kadar olan çift ve tek sayıları while döngüsü kullanarak ekrana yazdırınız.
	
	int i = 0;
	printf("Cift Sayilar \n");
	while(i < 10){
		printf("%d ", i);
		i += 2;
	}

	int j = 0;
	printf("\nTek Sayilar \n");
	while(j < 10){
		printf("%d ", j+1);
		j += 2;
	}



	//10'dan başlayıp bir bir azalta azalta 1'e kadar olan sayıları ekrana yazdırın.
	
	int i = 10;
	while(i > 0){
		printf("%d \n", i);
		i--;
	} 
        
        */


	/*
	  Sonsuz Döngü

	  int i = 0;
	  while(i){
	        printf("Dongu \n);
	  
	  }

	  //while(0) koşulun yanlış olduğunu gösterir bu yüzden while içerisine girilmez.
	  //while(1) koşulun doğru olduğunu gösterir bu yüzden while içinden çıkılamaz ve sonsuz döngü olur.

	*/



	/*Do-While
	 do{
	    codes
	 }
	 while(testExpressions);

	//Kullanıcıdan koşula bakmadan değer alınmak istediğinde kullanılır. 



	

	return 0;
}

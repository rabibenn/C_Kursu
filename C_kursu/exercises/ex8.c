#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 8
	//Dikdörtgen prizmanın taban alanını, yanal alanlarının toplamını, toplam alanı ve hacmini hesaplayıp ekrana bastırın
	
	float kisakenar, uzunkenar, yukseklik;
	float tabanalani, yanalalanlar, toplamalan, hacim;

	printf("prizmanizin sirayla kisa kenarini, uzun kenarini ve yuksekligini giriniz.\n");
	scanf("%f%f%f", &kisakenar, &uzunkenar, &yukseklik);

	if(kisakenar<uzunkenar){
        	tabanalani = kisakenar*uzunkenar;
        	yanalalanlar = 2*yukseklik*(kisakenar+uzunkenar);
        	toplamalan = 2*(tabanalani+kisakenar*yukseklik+uzunkenar*yukseklik);
        	hacim = tabanalani*yukseklik;

        	printf("taban alani: %.2f\n", tabanalani);
        	printf("yanal alanlar toplami: %.2f\n", yanalalanlar);
         	printf("toplam alan: %.2f\n", toplamalan);
	        printf("hacim: %.2f\n", hacim);
	}
	else{
		printf("kenar uzunluklarini kontrol ediniz.");
	}

	return 0;

}

#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 15
	//Ankara'dan İstanbul'a (450km) gelen aracın varış zamanını saat cinsinden alarak aracın ortalama hızını hesaplayıp ekrana bastırın
	
	float varis, orthiz;

	printf("varis sürenizi saat olarak giriniz: ");
	scanf("%f", &varis);

	orthiz = 450/varis;

	printf("aracinizin ortalama hizi %.2f km'dir.", orthiz);

	return 0;

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	/*
        ceil, floor, sqrt, pow, abs
        */

        //ceil: Yukarı yuvarlama
	printf("%f \n", ceil(4.3));

	//Çıktı: 5.000000

        //floor: Aşağı yuvarlama
        printf("%f \n", floor(4.8));

	//Çıktı: 4.000000
        
        //sqrt: Kök alma

	printf("%f \n", sqrt(81));

	//Çıktı: 9.000000
	
	printf("%f \n", sqrt(67));

	//Çıktı: 8.185353
	
        //pow: Üs alma
	
	printf("%f \n", pow(2,4));

	//Çıktı: 16.000000

        //abs: Mutlak değer alma (Sadece tam sayıların mutlak değerini alır.)

	printf("%d \n", abs(-15));

	//Çıktı: 15




	return 0;

}

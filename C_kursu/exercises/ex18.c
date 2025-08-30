#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exerrcise 18
	//Girilen sayının tek mi çift mi olduğunu bulma
	
	int sayi;

	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);

	if(sayi%2==0){
		printf("Sayiniz cifttir.");
	}
	else{
		printf("Sayiniz tektir.");
	}

	return 0;

}

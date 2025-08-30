#include<stdio.h>
#include<stdlib.h>


int main(){

	//Exercise 19
	//3 sayının en büyüğünü ve en küçüğünü bulma
	
	int a, b, c;

	printf("3 sayi giriniz: \n");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b && a>c){
		printf("%d, en buyuk sayidir.\n", a);
		if(b>c){
			printf("%d, en kucuk sayidir.", c);
		}
		else{
			printf("%d, en kucuk sayidir.", b);
		}
	}
	else if(b>a && b>c){
		printf("%d, en buyuk sayidir.\n", b);
		if(a>c){
			printf("%d, en kucuk sayidir.", c);
		}
		else{
			printf("%d, en kucuk sayidir.", a);
		}
	}
	else if(c>a && c>b){
		printf("%d, en buyuk sayidir.\n", c);
		if(a>b){
			printf("%d, en kucuk sayidir.", b);
		}
		else{
			printf("%d, en kucuk sayidir.", a);
		}
	}
	else if(a==b && a==c && b==c){
		printf("Butun sayilar esittir.");
	}
	else{
		printf("Birbirine eşit olan sayilar var.\n");
		if(a==b){
			if(a>c){
			        printf("%d, en kucuk sayidir.", c);
			}
			else{
				printf("%d, en buyuk sayidir.", c);
			}
		}
		else if(a==c){
			if(a>b){
				printf("%d, en kucuk sayidir.", b);
			}
			else{
				printf("%d, en buyuk sayidir.", b);
			}
		}
		else{
			if(a>b){
				printf("%d, en kucuk sayidir.", a);
			}
			else{
				printf("%d, en buyuk sayidr.", a);
			}
		}
	}

	return 0;

}

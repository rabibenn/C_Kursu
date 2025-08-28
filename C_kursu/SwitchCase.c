#include<stdio.h>


int main(){

	/*

	int gun = 4;
	
	switch(gun){
		case 1: printf("Pazartesi");
		break;
		case 2: printf("Sali");
		break;
		case 3: printf("Carsamba");
		break;
		case 4: printf("Persembe");
		break;
		case 5: printf("Cuma");
		break;
		case 6: printf("Cumartesi");
		break;
		case 7: printf("Pazar");
		break;
		default: printf("Gecersiz Gun");
		break;
	}

	*/

	//Switch-Case kullanarak 4 işlem
	
	float a, b;
	char op;

	printf("Lutfen iki adet sayi giriniz. \n");
	scanf("%f%f", &a, &b);

	printf("Lutfen operator giriniz. \n");
	scanf(" %c", &op);


	switch(op){
		case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b);
		break;
		case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b);
		break;
		case '/': printf("%.2f / %.2f = %.2f\n", a, b, a / b);
                break;
	        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b);
		break;
		default: printf("Lutfen gecerli bir operator giriniz.");
        }






	return 0;
}

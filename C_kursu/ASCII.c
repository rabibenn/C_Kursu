#include<stdio.h>
#include<stdlib.h>


int main(){

	//ASCII Tablosu
	//Karakterleri ifade etmek için ASCII kodları kullanılır. 0--255 arasında bir değer alır. Her karakterin bir ASCII kodu vardır.
	
	//printf("%d\t %d\t %d\t \n", 'a', 'b', 'c');

	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}

	return 0;

}

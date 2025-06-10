#include<stdio.h>
#include<stdlib.h>

//stdio.h, “Standard Input Output Header” yani standart giriş-çıkış başlık dosyası demektir.
//C programlarında ekrana yazdırmak (printf) ve klavyeden veri almak (scanf) gibi işleri yapmamıza yarar.


//stdlib.h, "Standard Library Header" yani standart kütüphane başlık dosyasıdır.
//C dilinde sayısal işlemler, rastgele sayı üretme, hafıza yönetimi, programı sonlandırma gibi işlevleri yapmak için kullanılır.



int main()
{
         /*
          Aritmetik Operatörler
          +, -, *, /, %, ++, --

         */

        int x = 15;
        int y = 10;
	int sonuc;

	int toplamasonuc = x + y;
	int cikarmasonuc = x - y;
	int carpmasonuc = x * y;
	int bolmesonuc = x / y;
	int modulussonuc = x % y;

	printf("X = 15 \n");
	printf("Y = 10 \n");
	printf("Toplama %d \n", toplamasonuc);
	printf("Cikarma %d \n", cikarmasonuc);
	printf("Carpma %d \n", carpmasonuc);
	printf("Bolme %d \n", bolmesonuc);
        printf("Kalan %d \n", modulussonuc);
        printf("X'in 1 fazlasi %d \n", ++x);
	printf("Y'nin 1 eksigi %d \n", --y);



        return 0;

}

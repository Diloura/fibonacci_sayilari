//klavyeden ka� adet fibonacci say�s� �retilece�i bilgisi girilerek say�lar�n �retilmesini sa�layan kod

#include<stdio.h>
#include<stdlib.h>

void fibonacci(int sayi){
	int ilk=0,ikinci=1,sonraki,i;
	
	printf("gosterilecek fibonacci sayilari:\n");
	
	for(i=0;i<sayi;i++){
		if(i<=1){
			sonraki=i;
		}
		else{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf("%d\n",sonraki);
	}
}


int main(){
	int sayi;
	printf("kac adet fibocnacci sayisi gosterilecek?: ");
	scanf("%d",&sayi);
	fibonacci(sayi);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int dobro(int n, int n2){
		int d;
		if(n>n2){
		d = 2 * n;
		}else{
		d = 2 * n2;
	}
	
	return d;
}
/*
int dobro(int num) {
	return 2 * num;
}
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n, n2, x, d;
	
	printf("Digite o 1� n�mero: \n");
	scanf("%d", &n);
	
	printf("Digite o 2� n�mero: \n");
	scanf("%d", &n2);
	
	d = dobro(n, n2);
	
	
	
	printf("%d\n", dobro(n, n2));
	
	
	
	return 0;
	
}


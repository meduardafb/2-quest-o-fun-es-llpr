#include <stdio.h>
#include <locale.h>

int r(int nu1, int nu2){
		
		if(nu1>nu2){
		return nu1;
		}else{
		return nu2;
	}
	
	return 0;
}
/*
int dobro(int num) {
	return 2 * num;
}
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int nu1, nu2, r;
	
	printf("Digite o 1ª número: \n");
	scanf("%d", &nu1);
	
	printf("Digite o 2ª número: \n");
	scanf("%d", &nu2);
	
	
	
	return 0;
	
}


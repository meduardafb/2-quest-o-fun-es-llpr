#include <stdio.h>

int imprimir_varios(int quantidade){
	while(quantidade){
		printf("Adoro Programar\n");
		--quantidade;
		
	}
	printf("O valor de quantidade �: %d\n", quantidade);
}

int main(){
	int x;
	scanf("%d", &x);
	imprimir_varios(x);
	printf("O valor de x �: %d\n", x);
	
	return 0;
}

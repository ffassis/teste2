#include<stdio.h>
void eh_primo(int num);
int main() {
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	eh_primo(numero);
	
	return 0;
}
void eh_primo(int num) {
	int i, contador=0;
	for(i = 2; i < num; i++){
		if(num%i == 0){
			contador++;
			break;
		}		
	}
	if(contador)
		printf("%d NAO eh primo.\n", num);
	else
		printf("%d eh primo.\n", num);
}

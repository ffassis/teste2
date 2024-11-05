#include <stdio.h>

int main(){
	int i=0, j=0, soma=0,vetor[5];
	
	for(i=0; i<5; i++)
		vetor[i] = 5;
	
	for(;i;)
		soma = soma + vetor[i];
		
	for(i=0; i<5; i++)
		printf("%d ", vetor[i]);
	
	printf("\n\nsoma = %d", soma);
	return 0;
}


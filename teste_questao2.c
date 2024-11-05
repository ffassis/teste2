#include <stdio.h>

int dobrar(int *p);

int main(){
	int numero = 10;
	dobrar(&numero);
	printf("Resultado: %d\n", numero);
	return 0;
}

int dobrar(int *p){
	*p = *p * 2;
}


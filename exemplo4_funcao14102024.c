#include<stdio.h>
void funcao_teste(int param1);
int main() {
	funcao_teste(507);

	return 0;
}
void funcao_teste(int param1) {
	int a = param1, b=0, c=0, i=0;
	if(param1 > 0) {
		b = 0;
		for(i = 0; i < 10; i++) {
			c = i * i;
			b += c;
			printf("i=%d %d %d %d\n", i, a, b, c);
		}
		printf("i=%d %d %d %d\n", i, a, b, c);
	}
	printf("i=%d %d %d %d", i, a, b, c);
}

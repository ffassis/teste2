#include <stdio.h>

int main() {
	int num = 507;
	int *pt1 = &num;
	
	printf("%d\n", num);
	printf("%x\n", &num);
	printf("%p\n", pt1);
	printf("%p\n", &pt1);
	printf("%d", *pt1);
	
	return 0;
}

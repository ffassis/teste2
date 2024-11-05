#include <stdio.h>

int main(){
	
	int x, y, z, resp;
	
	int mat[2][2] = {{1,2}, {3,4}}, i ;
	int *p;
	p = mat;

	for(i=0; i<4; i++){
		printf("%d\n", *p);
		p++;
	}

}

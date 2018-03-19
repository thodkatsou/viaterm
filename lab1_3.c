#include <stdio.h>

void swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(int argc, char** argv){
	int x, y;

	x = 5;
	y = 8;

//	scanf("%d%d",&x,&y);

	swap(&x,&y);

	printf("x=%d\ty=%d\n",x,y);
}
#include <stdio.h>

int main(int argc, char** argv){
	int x = 2;
	int y = 8;
	int *p;
	int *q;

	p = &x;
	q = &y;

	printf("Address of x:%p\tValue of x:%d\n", &x, x);
	printf("Address of x:%p\tValue of x:%d\n", p, *p);
	printf("Value of p:%p\tValue of *p:%d\n", p, *p);

	printf("Address of y:%p\tValue of y:%d\n", &y, y);
	printf("Address of y:%p\tValue of y:%d\n", q, *q);
	printf("Value of q:%p\tValue of *q:%d\n", q, *q);

	printf("Address of p:%p\n", &p);
	printf("Address of q:%p\n", &q);
}
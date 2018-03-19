#include <stdio.h>

int main(int argc, char** argv){
	int a = 4;
	double b = 3.14;
	char s[] = "Hello!";

	printf("%d\t%p\n", a, &a);
	printf("%lf\t%p\n", b, &b);
	printf("%s\t%p\t%p\n", s, s, &s[0]);
}
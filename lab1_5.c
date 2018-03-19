#include <stdio.h>

char* contains(char* array, char c){
	int i = 0;
	while (array[i] != '\0'){
		if (array[i] == c){
			return (array+i);
		}
		i++;
	}
	return NULL;
}

int main(int argc, char** argv){
	char s[]="Hello!";
	char *p = contains(s,'l');

	if (p == NULL){
		printf("NOT FOUND\n");
		return 0;
	}
	printf("%c\n",*p);
	printf("%p\n",p);
	printf("%p\n",&s[2]);
}
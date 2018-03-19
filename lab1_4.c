#include <stdio.h>

void minmax(int a[], int n, int *max, int *min){
	int i;
	*max = a[0];
	*min = a[0];
	for (i=1; i<n; i++){
		if (a[i] > *max){
			*max = a[i];
		}
		if (a[i] < *min){
			*min = a[i];
		}
	}
}

int main(int argc, char** argv){
	int a[] = {5,7,3,9,23,5,8};
	int size = 7;
	int max, min;

	minmax(a,size,&max,&min);

	printf("max=%d\tmin=%d\n",max,min);
}
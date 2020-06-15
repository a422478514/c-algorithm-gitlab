#include<stdio.h>


int main(int argc, char const *argv[])
{
	int arr [5] = {1,2,3,4,5};
	int *p;
	p = arr;
	printf("%d\n", *(++p));
	return 0;
}
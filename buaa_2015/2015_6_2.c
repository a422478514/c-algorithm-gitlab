#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int * func(int a[]){
	int i;
	for (int i = 0; i < 10; ++i)
	{
		a[i]=i;
	}
	for (int i = 0; i < 5; ++i)
	{
		a[9-i]=a[i];
	}
	return a;
}

int main(int argc, char const *argv[])
{
	int a[10],*b;
	b = func(a);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", *(b+i));
	}
	return 0;
}
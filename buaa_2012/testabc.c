#include<stdio.h>
#include<string.h>

#define ABC(x) x*x;

int main(int argc, char const *argv[])
{
	int a,k=3;
	a=++ABC(k+1);
	printf("%d\n", a);
	printf("%d\n", 1*10);
	return 0;
}
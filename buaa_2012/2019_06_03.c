#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

#define N 5
#define M N+1
#define f(x) (x*M)

int main(int argc, char const *argv[])
{
	int i,j;
	i=f(2);
	j=f(1+1);
	printf("%d   %d\n", i,j);
	return 0;
}
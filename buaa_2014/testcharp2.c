#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{

	int (*p)[10];
	int v;
	*p[1]=1;
	printf("%d\n", *p[1]);
	return 0;
}
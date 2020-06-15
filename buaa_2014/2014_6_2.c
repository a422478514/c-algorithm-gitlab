#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char str1[] = {"avcsasdsasdasdadasdds"},*p;
	p=str1;
	int len = strlen(str1);
	int size = sizeof(str1);
	int plen = strlen(p);
	int psize = sizeof(p);
	
	printf("%d\n", len);
	printf("%d\n", size);

	printf("%d\n", plen);
	printf("%d\n", psize);
	return 0;
}
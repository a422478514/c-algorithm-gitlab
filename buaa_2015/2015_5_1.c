#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char *p,*q;
	char a[]={"abcd"},b[]={"abcd"};
	int result;
	p=a;
	q=b;
	if (p == q)
	{
		printf("%d\n", 3);
	}
	if (a == b)
	{
		printf("%d\n", 0);
	}

	if ("abcd" == "ab cd")
	{
		printf("%d\n", 1);
	}
	result = strcmp("abcd","abcd");
	printf("%d\n", result);
	return 0;
}
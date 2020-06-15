#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int a=4,b=2;
	printf("%d\n", a||b);
	printf("%d\n", a|b);
	printf("%d\n", a>>b);
	printf("%d\n", a/b);
	return 0;
}
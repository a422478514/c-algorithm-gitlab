#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	a=1;b=2;c=3;
	a=b--<=a||a+b!=c;
	printf("%d,%d\n",a,b );
	return 0;
}
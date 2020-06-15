#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int a[]={1,2},b[]={1,3},*p,*q;
	p=a;
	q=b;
	printf("num=%d\n", *p++);
	printf("num=%d\n", *p++);
	if (*p++==*q++)
	{
		printf("%d\n", 1);
	}

	if (*p++==*q++)
	{
		printf("%d\n", 2);
	}
	return 0;
}
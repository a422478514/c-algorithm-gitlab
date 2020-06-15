#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int (*p)[3];
	p=a;
	//printf("%d\n", *(p+2));
	//printf("%d\n", **((p+1)+2));
	//printf("%d\n", *(p[1]+1));
	//printf("%d\n", *(p+2));
	return 0;
}
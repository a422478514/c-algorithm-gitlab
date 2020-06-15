#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int x=10;
	int y;
	y= (2*8,x+=5);
	printf("%d\n", x);
	printf("%d\n", y);
	return 0;
}
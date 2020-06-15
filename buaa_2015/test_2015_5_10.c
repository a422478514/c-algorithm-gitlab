#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

#define FUDGE(y) 2.84+y
#define PR(x) printf("%d\n", (int)(x));
#define PRINT1(x) PR(x);putchar('\n')


int main(int argc, char const *argv[])
{
	int a = 2;
	PRINT1(FUDGE(5)*a);
	return 0;
}
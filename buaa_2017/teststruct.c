#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


struct Complex
{
	double realPart;
	double imagePart;
}c,*pc=&c;

int main(int argc, char const *argv[])
{
	c.realPart = 3.0;
	printf("%f\n", c.realPart);
	return 0;
}
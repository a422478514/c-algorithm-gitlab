#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	extern int i;
	printf("%d\n", i);
	return 0;
}

int i = 1;

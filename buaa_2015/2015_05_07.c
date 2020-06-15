#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "../common/base.c"


int wordlength(){
	int i;
	unsigned int v = ~0;
	for (i = 1;(v=v>>1)>0; ++i);
	return i;
}

int main(int argc, char const *argv[])
{
	int i=0;
	i = wordlength();
	printf("%d\n", i);
	return 0;
}
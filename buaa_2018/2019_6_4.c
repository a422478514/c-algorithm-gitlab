#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char c = 48;
	int i,mask=01;
	for (i = 1; i <= 5; ++i)
	{
		printf("%c\n", c|mask);
		mask = mask << 1;
	}
	
	return 0;
}
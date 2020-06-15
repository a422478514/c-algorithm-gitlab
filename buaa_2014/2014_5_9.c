#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int i,len=0;
	for (int i = 1; i < argc; i+=2)
	{
		len+=strlen(argv[i]);
		printf("%s\n", argv[i]);
	}
	printf("%d\n", len);
	return 0;
}
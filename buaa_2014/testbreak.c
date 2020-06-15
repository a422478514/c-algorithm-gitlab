#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
	for (int i = 0; i < 5; ++i)
	{
		printf("i=%d\n", i);
		for (int j = 0; j < 4; ++j)
		{
			/* code */
			printf("j=%d\n", j);
			break;
		}
	}
	return 0;
}
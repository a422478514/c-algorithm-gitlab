#include<stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	unsigned int v = ~0;
	for (i = 1; (v=v>>1)>0; ++i)
	{
		
	}
	printf("%d\n", i);

	return 0;
}
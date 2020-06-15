#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", EOF);
	char *p = "adsad";
	for (int i = 0; i < 10; ++i)
	{
		if(*(p+i))
		printf("%c\n", *(p+i));
	}
	return 0;
}
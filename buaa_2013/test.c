#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *s = "asdas dsda";
	int len = strlen(s);
	for (int i = 0; i < len; ++i)
	{
		printf("%c\n", *(s+i));
		printf("%d\n", *(s+i) == ' ');
	}
	return 0;
}
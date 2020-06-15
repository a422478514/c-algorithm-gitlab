#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char s[5][10] = {{"aebcd"},{"acbcd"},{"afbcd"},{"abdcd"},{"azbcd"}};
	char *p;
	int i;
	p=s[0];
	for (int i = 0; i < 5; ++i)
	{
		if(strcmp(p,s[i])<0)
			p=s[i];
	}
	printf("%s\n", p);
	return 0;
}
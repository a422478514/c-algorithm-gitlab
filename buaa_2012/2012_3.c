#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	/* code */
	char c;
	c=getchar();
	if(c>='a'&& c<'v'){
		c=c+5;
	}
	if(c>='v'&&c<='z'){
		c=c+5-26;
	}
	putchar(c);
	return 0;
}
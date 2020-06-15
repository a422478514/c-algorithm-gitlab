#include <stdio.h>
#include <string.h>
#include <ctype.h>


int sstrcmp(char *s,char *t){
	while(*s && *t && *s==*t){
		s++;
		t++;
	}
	return *s-*t;
}

int main(int argc, char const *argv[])
{
	/* code */

	char *s="abc";
	char *t="abcd";
	printf("%d\n", sstrcmp(t,t));
	return 0;
}
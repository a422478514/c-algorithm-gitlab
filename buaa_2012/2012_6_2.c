#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int f(char *s){
	char *p=s;
	while(*p){
		p++;
	}
	return p-s;
}

int main(int argc, char const *argv[])
{
	char *a="abded";
	int k;
	k=f(a);
	printf("%d\n", k);
	return 0;
}
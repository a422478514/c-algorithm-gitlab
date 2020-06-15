#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void init(int *p){
	int a = 3;
	*p = a; 
}

int main(int argc, char const *argv[])
{
	int *p,a;
	p=&a;
	init(p);
	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}
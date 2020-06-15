#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>



int main(int argc, char const *argv[])
{
	/* code */
	int max(int x,int y);
	int (*p)(int,int);
	p=max;
	int x=1,y=2;
	printf("%d\n", (*p)(x,y));
	return 0;
}

int max(int x,int y){
	return x>y?x:y;
}
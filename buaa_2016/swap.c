#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void swap(int *p1,int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(int argc, char const *argv[])
{
	int a=1,b=2,*p1,*p2;
	p1=&a;
	p2=&b;
	swap(p1,p2);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	return 0;
}
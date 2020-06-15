#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	//int arr[10];
	//scanf("%d",&arr);
	char p[10],q[10];
	//p=(char *)malloc(sizeof(char)*20);
	scanf("%s %s",p,q);
	printf("%s%s\n", p,q);
	puts(p);
	puts(q);
	return 0;
}
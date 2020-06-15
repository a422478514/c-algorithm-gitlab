#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int arr [] = {1,2,3};
	printf("%d\n", *(arr+1));
	return 0;
}
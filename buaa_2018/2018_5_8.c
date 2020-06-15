#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char str1[] = "Hello";
	char str2[] = "Hello";

	if(str1 == str2) printf("Equal\n");
	else printf("Unequal\n");
	return 0;
}
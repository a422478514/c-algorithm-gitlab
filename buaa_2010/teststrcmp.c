#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char str1[10]="efg";
	char str2[10]="efg";
	int result = strcmp(str1,str2);
	int length = strlen(str1);
	printf("%d\n", result);
	printf("%d\n", length);
	return 0;
}
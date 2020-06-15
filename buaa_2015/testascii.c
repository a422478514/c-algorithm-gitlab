#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
	char ch = 'A',*ch2="123123\n";
	printf("%d\n", (int)strlen(ch2));
	//scanf("%c",&ch);
	printf("%d\n", ch);
	printf("%d\n", EOF);
	printf("%c\n", EOF);
	return 0;
}
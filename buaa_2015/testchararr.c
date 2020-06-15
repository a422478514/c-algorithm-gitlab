#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
	char arr[10]={"abvd"};
	if(!arr[4]){
		printf("11\n");
	}
	if(arr[4]!='\0'){
		printf("22\n");
	}
	printf("%c\n", '\0');
	return 0;
}
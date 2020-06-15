#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", argc);
	while(argc>1){
		++argv;
		printf("%s\n", *argv);
		argc--;
	}

	return 0;
}
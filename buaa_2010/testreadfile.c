#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *f = NULL;

	f = fopen("/tmp/test12.txt","r+");
	char ch = fgetc(f);
	while(!feof(f)){
		putchar(ch);
		ch=fgetc(f);
	}
	fclose(f);
	return 0;
}
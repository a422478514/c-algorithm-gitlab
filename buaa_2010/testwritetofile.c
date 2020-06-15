#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *f = NULL;

	f = fopen("/tmp/test.txt","w+");
	fprintf(f, "this is a new file");
	fputs("this is a test file",f);
	fclose(f);
	return 0;
}
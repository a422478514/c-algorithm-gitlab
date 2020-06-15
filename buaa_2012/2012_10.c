#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	long position;
	fp = fopen("/tmp/20190723_1.txt","a");
	position = ftell(fp);
	printf("position=%ld\n", position);
	fprintf(fp, "data");
	position = ftell(fp);
	printf("position=%ld\n", position);
	return 0;
}
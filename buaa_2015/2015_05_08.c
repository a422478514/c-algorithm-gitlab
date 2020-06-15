#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "../common/base.c"

void fcopy(FILE *out,FILE *fin){
	char ch;
	do{
		printf("step2\n");
		ch=fgetc(fin);
		if(feof(fin))
			break;
		printf("%c\n", ch);
		fputc(ch,out);
	}while(1);
}

int main(int argc, char const *argv[])
{
	FILE *out,*in;
	if(argc!=3)
		return 0;
	if((in=fopen(argv[2],"rb+"))==NULL)
		return 0;
	out=fopen(argv[1],"wb");
	printf("step1\n");
	fcopy(out,in);
	fclose(in);
	fclose(out);
	return 0;
}
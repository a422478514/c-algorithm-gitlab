#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *f;
	char str[100];
	char constr[]={'a','b','c'};
	if((f=fopen("/tmp/testfgets.txt","r"))==NULL){
		puts("open file fail!");
		return 0;
	}
	fputs(constr,f);
	rewind(f);
	if(fgets(str,100,f) != NULL){
		puts(str);
	}
	fclose(f);
	return 0;
}
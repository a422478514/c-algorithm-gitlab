#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *old,*new;
	if(argc!=3){
		puts(" arguments is missing!");
		return 0;
	}
	if((old=fopen(argv[1],"rb"))==NULL){
		puts(" open old file error");
		return 0;
	}
	if((new=fopen(argv[2],"wb"))==NULL){
		puts("open new file error");
		return 0;
	}
	while(!feof(old)){
		fputc(fgetc(old),new);
	}
	fclose(old);
	fclose(new);
	return 0;
}
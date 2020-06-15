#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	if((fp1=fopen("/tmp/20190723_1.txt","a"))==NULL){
		printf("Cannot open file1!\n");
		return 0;
	}
	if((fp2=fopen("/tmp/20190723_2.txt","r"))==NULL){
		printf("Cannot open file2!\n");
		return 0;
	}
	while(!feof(fp2)){
		fputc(fgetc(fp2),fp1);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
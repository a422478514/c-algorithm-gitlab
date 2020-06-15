#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	fp=fopen("/tmp/daquan/1.txt","r+");
	while(!feof(fp)){
		if(fgetc(fp)=='#'){
			fseek(fp,-1L,SEEK_CUR);
			fputc('*',fp);
			//fseek(fp,ftell(fp),SEEK_SET);
		}
	}
	return 0;
}
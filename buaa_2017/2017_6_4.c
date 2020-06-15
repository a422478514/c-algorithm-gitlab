#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char str[101];
	if((fp=fopen("/tmp/daquan/tag.txt","r"))==NULL){
		printf("the file is empty\n");
		return 0;
	}
	//一次读一行
	while(fgets(str,100,fp)!=NULL){
		//printf("%s\n", str);
	}
	printf("%s\n", str);
	fclose(fp);
	return 0;
}
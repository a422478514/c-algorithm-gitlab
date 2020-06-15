#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char ch;
	fp = fopen("/tmp/daquan/word.txt","r");
	printf("%ld\n", ftell(fp));
	//读出一个字符串
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	//rewind(fp);
	//fseek(fp,0,SEEK_SET);
	//fseek(fp,-(ftell(fp)),SEEK_CUR);
	//fseek(fp,ftell(fp),SEEK_END);
	printf("%ld\n", ftell(fp));
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	
	fclose(fp);
	return 0;
}
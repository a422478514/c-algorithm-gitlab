#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int word_count(FILE * fp){
	int wc,found,i;
	wc=found=i=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
		if(!ch||(ch=='\t')||ch=='\n')
			if(found){ ++wc; found = 0;}
		else found = 1;
	if(found) ++wc;
	return wc;
}

int main(int argc, char const *argv[])
{
	FILE *fp;
	int s;
	s = word_count(fp=fopen("/tmp/daquan/word.txt","r"));
	printf("%d\n", s);
	return 0;
}
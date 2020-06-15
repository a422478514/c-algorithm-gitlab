#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "../common/base.c"

int main(int argc, char const *argv[])
{
	char s[80],filename[20]="/tmp/daquan/1.txt";
	int i=0,flag=1;
	FILE *fp;
	printf("Enter filename:\n");
	if((fp=fopen(filename,"r")) == NULL){
		printf("can not open file\n");
		return 0;
	}
	while(fgets(s,4,fp)!=NULL){
		if(flag){
			printf("line=%3d:%s", ++i,s);
		}
		else{
			printf("%s", s);
		}
		if(strlen(s)<3){			
			flag=1;
		}
		else{
			flag=0;
		}
	}
	return 0;
}
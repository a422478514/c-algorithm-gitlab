#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void REPLACE(char *olds,char *str1,char *str2,char *news){
	char *p,*q;
	while(*olds!='\0'){
		for (p=olds,q=str1;*p!='\0' && *q!='\0' && *p == *q;p++,q++);
		if(*q!='\0')
			*news++=*olds++;
		else{
			for (q=str2; *q!='\0' ; q++){
				*news++=*q;
			}
			olds=p;
		}
	}
	*news='\0';
}

int main(int argc, char const *argv[])
{
	char *olds = "123ab123x";
	char *str1 = "123";
	char *str2 = "45";
	char *news ;
	REPLACE(olds,str1,str2,news);
	printf("%s\n", olds);
	return 0;
}
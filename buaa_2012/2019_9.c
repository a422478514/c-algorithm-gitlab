#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char str[81],*pstr1,*pstr2;
	int n=0;
	int i=0;
	char ch;
	while((ch=getchar())!='\n'){
		str[i++] = ch;
	}
	puts(str);

	//保存字符长度
	n=strlen(str);
	pstr1=str;
	pstr2=str+n-1;
	while(pstr1<pstr2){
		if(*pstr1!=*pstr2){
			break;
		}
		pstr2--;
		pstr1++;
	}
	if(pstr1<pstr2){
		printf("no!\n");
	}else{
		printf("yes\n");
	}
	return 0;
}
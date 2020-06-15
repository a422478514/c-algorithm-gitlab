
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char ch[81],*p=ch,*q;
	scanf("%s",p);
	q=p+strlen(p)-1;
	printf("%s\n",ch);
	printf("%d\n", p<q);
	while(p<q){
		printf("p=%c q=%c\n", *p,*q);
		if(*p==*q){
			p++;
			q--;
		}else{
			break;
		}
	}
	if(p<q){
		printf("该字符串不是回文！\n");
	}else{
		printf("该字符串是回文！\n");
	}
	return 0;
}
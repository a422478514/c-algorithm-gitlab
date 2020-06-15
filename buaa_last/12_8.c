#include<stdio.h>

int main(int argc, char const *argv[])
{
	char str[100];
	char ch;
	int i = 0;
	scanf("%s %c",str,&ch);
	//开始遍历
	//字符串未遍历完，或者 遍历到了和ch相等的字符
	while( *(str+i) && *(str+i) != ch){
		i++;
	}
	//该字符串未出现
	if(!*(str+i)){
		printf("该字符没出现过！\n");
		return 0;
	}
	//该字符出现的位置是
	printf("字符出现的位置是%d\n", i+1);
	//删除前字符串是
	printf("%s\n", str);
	//删除后字符串是
	while(*(str+i)){
		*(str+i) = *(str+i+1);
		i++;
	}
	printf("%s\n", str);
	return 0;
}
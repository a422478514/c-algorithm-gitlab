#include <stdio.h>
//找出子串在主串中出现的次数
int STRCOUNT(char *str,char *substr){
	if(str == NULL){
		printf("主串不能为null\n");
		return 0;
	}
	if(substr == NULL){
		printf("子串不能为null\n");
		return 0;
	}
	//主串的偏移量
	int i = 0;
	//子串的偏移量
	int j = 0;
	//统计有多少子串
	int count = 0;
	//当主串还没有到头
	while( *(str+i) ){
		int k = i;
		while(*(substr+j) && *(str+k) == *(substr+j)){
			k++;
			j++;
		}
		//判断子串是否到结尾，到结尾了则说明找到一个匹配的
		if(!*(substr+j)){
			count++;
		}
		//主串的指针移动
		i++;
		//初始化子串的指针
		j=0;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char *str = "abcdefabedeas";
	char *substr = "abcdf";
	int count = 0;
	count = STRCOUNT(str,substr);
	printf("%d\n", count);
	return 0;
}
#include<stdio.h>

int STRCOUNT(char *str,char *substr){
	//总出现次数
	int count = 0;
	//p1指向str  p2指向substr
	char *p1,*p2;

	//遍历开始，如果str还没遍历到最后
	while(*str){
		//每次都重新比较
		p1 = str;
		p2 = substr;
		//如果p1和p2字符一直相等，则移动p1和p2指针比较下面的字符
		while(*p1 == *p2 && *p1){
			p1++;
			p2++;
		}
		
		//比较到不相等处，判断子串是否到结尾
		if(!*p2){
			//增加查找到的次数
			count++;
		}
		str++;
	}


	return count;
}

int main(int argc, char const *argv[])
{
	char p1[20];
	char p2[10];
	scanf("%s %s",p1,p2);
	printf("%d\n", STRCOUNT(p1,p2));
	return 0;
}
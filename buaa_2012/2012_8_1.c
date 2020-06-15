#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *str,ch;
	//记录位置
	int i=0,length=0;
	//保存输入
	scanf("%s %c",str,&ch);
	//打印字符串
	printf("%s\n", str);
	printf("%c\n", ch);
	length = strlen(str);
	printf("%d\n", length);
	//查找字符
	while(i<length){
		//判断是否相等
		if(*(str+i) == ch){
			//相等返回i
			break;
		}
		i++;
	}
	printf("寻找元素\n");
	if(i == length){
		printf("没找到匹配的\n");
	}else{
		printf("出现在第%d个位置\n", i+1);
		//删除该字符
		while(i<length-1){
			*(str+i) = *(str+i+1);
			i++;
		}
		*(str+i) = '\0';
		printf("%s\n", str);
	}
	return 0;
}
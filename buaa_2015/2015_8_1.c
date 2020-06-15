#include <stdio.h>

void searchAndDelete(char *arr,char c){
	if(!*arr){
		printf("字符串为空!\n");
		return;
	}
	if(!c){
		printf("字符串为空!\n");
		return;	
	}
	int i = 0;
	printf("寻找\n");
	while(*(arr+i) && *(arr+i) != c){
		i++;
	}
	//
	if(!*(arr+i)){
		printf("未找到！\n");
		return;
	}
	printf("第%d个位置\n", i+1);
	//元素前移
	while(*(arr+i)){
		*(arr+i) = *(arr+i+1);
		i++;
	}

}


int main(int argc, char const *argv[])
{
	char arr[100],c;
	for (int i = 0; i < 100; ++i)
	{
		arr[100] = '\0';
	}
	printf("存入\n");
	scanf("%s %c",arr,&c);
	printf("删除前：%s\n",arr);
	searchAndDelete(arr,c);
	printf("删除后：%s\n", arr);
	return 0;
}
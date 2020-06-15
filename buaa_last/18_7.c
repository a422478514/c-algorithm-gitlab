#include<stdio.h>


int freqs(char *str,char *pattern){
	int count = 0;
	int i = 0;
	int j = 0;
	while(*(str+i)){
		j=0;//每次都重置j
		//逐个对比
		while(*(str+i+j) && (*(pattern+j) == *(str+i+j)) ){
			//每次移动j
			j++;
		}
		//对比结束，判断pattern是否都结尾
		if(!*(pattern+j)){
			//到结尾 count+1
			count++;
		}
		//每次移动一个字符
		i++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char str[] = "aaaa";
	char pattern[] = "aa";
	int count = 0;
	count = freqs(str,pattern);
	printf("%d\n", count);
	return 0;
}
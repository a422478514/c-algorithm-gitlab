#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "../common/base.c"

int sum(int n){
	int result;
	if(n<=0){
		printf("输入数据有问题\n");
		return -1;
	}else if(n==1){
		return 1;
	}else{
		result = n + sum(n-1);
		return result;
	}
}

int main(int argc, char const *argv[])
{
	int s = 0;
	s = sum(2);
	printf("%d\n", s);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

//判断是否是素数
int sushu(int n){
	for (int i = 2; i < n; ++i)
	{
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int n = atoi(argv[1]);
	int num = 2;
	for (int i = 0; i < n; )
	{
		if(sushu(num)){
			if(i == n-1){
				printf("%d", num);
			}else{
				printf("%d,", num);
			}
			i++;
		}
		num++;
	}

	return 0;
}
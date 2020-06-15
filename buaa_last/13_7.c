#include<stdio.h>

#define SIZE 100

void printArr(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int len = 10;
	int arr[len];
	int min = 0;
	//建数组
	for (int i = 0; i < len; ++i)
	{
		scanf("%d",arr+i);
	}
	printArr(arr,10);
	//删除最小值
	//先找到最小值下标
	for (int i = 0; i < 10; ++i)
	{
		if(*(arr+min) > *(arr+i)){
			min = i;
		}
	}
	//打印最小的下标
	printf("min is %d\n", min);
	//删除最小元素
	for (int i = min; i < 9; ++i)
	{
		*(arr+min) = *(arr+i+1);
	}
	*(arr+9) = -1;
	printArr(arr,10);
	return 0;
}
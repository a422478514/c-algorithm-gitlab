#include <stdio.h>


int main(int argc, char const *argv[])
{
	int arr[100];
	int next=0;
	//n为最小元素的下标
	int n=0;
	//先给数组赋初值
	for (int i = 0; i < 100; ++i)
	{
		*(arr+i) = -1;
	}
	printf("请输入：\n");
	for (int i = 0; i < 100; ++i)
	{
		scanf("%d",&next);
		if(next == -1){
			break;
		}
		*(arr+i) = next;
	}
	//
	printf("打印数组元素值：\n");
	for (int i = 0; *(arr+i) != -1; ++i)
	{
		printf("%d\n", *(arr+i));
	}
	for (int i = 0; *(arr+i+1) != -1; ++i)
	{
		//始终指向最小元素的下标
		if(*(arr+i) > *(arr+i+1)){
			n=i+1;
		}
	}
	//删除
	for (int i = n; *(arr+i) != -1; ++i)
	{
		*(arr+i) = *(arr+i+1);
	}

		printf("打印数组元素值：\n");
	for (int i = 0; *(arr+i) != -1; ++i)
	{
		printf("%d\n", *(arr+i));
	}
	return 0;
}
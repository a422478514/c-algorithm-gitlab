#include<stdio.h>


int main(int argc, char const *argv[])
{
	int arr[] = {10,20,30,40,50,60,70};
	int k = 3,n=7;
	//每次移动一个位置，移动三次
	for (int i = 0; i < k; ++i)
	{
		//数组所有元素后移动一个位置
		//保存数组尾部元素
		int temp = arr[n-1];
		//所有元素后移
		int j = n-1;
		while(j>0){
			arr[j] = arr[j-1];
			j--;
		}
		arr[0] = temp;
	}
	for (int i = 0; i < 7; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
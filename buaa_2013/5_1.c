#include <stdio.h>

//假设长度为 n 的顺序表 A[1..n]中每个数据元素为一整数,请写出按照下列思想将表
//中数据元素按值从小到大进行排序的算法:第 1 趟排序将最小值元素放在 A[1]中,最大
//值元素放在 A[n]中;第 2 趟排序将次小值元素放在 A[2]中,次大值元素放在 A[n-1]中;......,依此下去,
//直至排序结束
int main(int argc, char const *argv[])
{
	int n=0,k=0;
	scanf("%d",&n);
	int arr[n];
	//保存键盘赋值
	while(k<n){
		scanf("%d",&arr[k]);
		k++;
	}
	int min=0,max=0;
	for (int i = 0; i < n; ++i)
	{
		arr[i] = n-i;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	//找出最小元素和最大元素
	
	for (int i = 0; i < n/2; ++i)
	{
		for (int j = i; j < n-i; ++j)
		{
			if(arr[min] > arr[j]){
				min = j;
			}
			if(arr[max] < arr[j]){
				max = j;
			}
		}
		printf("i=%d  min=%d   max=%d\n",i,min,max);
		int temp = arr[i];
		//交换最小和最大
		arr[i] = arr[min];
		arr[min] = temp;
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		if((min+max+1) != n){
			//不用再换了
			temp = arr[n-i-1];
			arr[n-i-1] = arr[max];
			arr[max] = temp;

		}
		
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}



	return 0;
}
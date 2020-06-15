#include <stdio.h>

void printArr(int *arr,int size){
	for (int i = 1; i <= size; ++i)
	{
		/* code */
		printf("%d,",arr[i]);
	}
}


int sort(int *arr,int size){
	printf("%d\n", size);
	//从大到小排序
	for (int i = 1; i < size/2; ++i)
	{
		int max = i;
		int min = i;
		//每次选出一个最大的和一个最小的，并和左侧i位置交换，或者size-i+1交换
		for (int j = i+1; j < size-i+1; ++j)
		{
			if(arr[max] < arr[j]){
				max = j;
			}
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		//交换max的i的位置
		int temp = arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
		//交换min的size-i的位置
		temp = arr[min];
		arr[min] = arr[size-i];
		arr[size-i] = temp;
		printArr(arr,6);
		printf("\n");
	}
	return 0;
}


int main(int argc, char const *argv[])
{
	int arr[] = {0,7,5,2,8,9,4};
	int result = sort(arr,7);
	printArr(arr,6);
	return 0;
}
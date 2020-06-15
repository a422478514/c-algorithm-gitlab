#include <stdio.h>

void printArr(int *arr,int size){
	for (int i = 0; i < size; ++i)
	{
		/* code */
		printf("%d,",arr[i]);
	}
}


int sort(int *arr,int size){
	printf("%d\n", size);
	//从大到小排序
	for (int i = 0; i < size; ++i)
	{
		int max = i;
		//每次选出一个最大的，并和左侧i位置交换
		for (int j = i+1; j < size; ++j)
		{
			if(arr[max] < arr[j]){
				max = j;
			}
		}
		//交换max的i的位置
		int temp = arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
		printArr(arr,6);
		printf("\n");
	}
	return 0;
}


int main(int argc, char const *argv[])
{
	int arr[] = {7,5,2,8,9,4};
	int result = sort(arr,6);
	printArr(arr,6);
	return 0;
}
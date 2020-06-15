#include<stdio.h>

#define ARR_SIZE 11
#define ARR {10,9,8,7,6,5,4,3,2,1,0}

int defaukt;

void printArr(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
}

int SORT(int arr[],int n){
	//
	int i=0,j=n-1,temp=0,min,max;
	//每次排序都找出一组最大最小值，故最多只需n/2次即可完成排序
	while(i<=n/2){
		printf("start=%d\n", i);
		//找出所有未排序元素中最大最小值
		min = i;
		max = j;
		for (int k = i; k <= j; ++k)
		{
			if(arr[k] < arr[min]){
				min = k;
			}
			if(arr[k] > arr[max]){
				max = k;
			}
		}
		printf("i=%d  j=%d\n",i,j );
		printf("min=%d  max=%d\n",min,max );

		//交换 min和i 
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;

		
		//如果最大值在i位置上，那么经过上轮交换，max已经移动到min上
		if(i != max){
			temp = arr[max];
			arr[max] = arr[j];
			arr[j] = temp;
		}else{
			temp = arr[min];
			arr[min] = arr[j];
			arr[j] = temp;
		}


		i++;
		j--;
		printArr(arr,n);
		printf("end=%d\n", i);
	}

	return 0;
}



int main(int argc, char const *argv[])
{
	printf("%d\n", defaukt);
	int ddd;
	printf("ddd%d\n", ddd);
	int arr[] = ARR;
	SORT(arr,ARR_SIZE);
	printArr(arr,ARR_SIZE);
	return 0;
}
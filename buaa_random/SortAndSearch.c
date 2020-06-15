#include <stdio.h>
#include <stdlib.h>

//给arr排序
void sort(int *arr,int length){
	//选择排序
	int min;
	int i,j;
	for( i = 0; i < length; i++){
		//找出最大值
		min = i;
		//比较min和后续的值
		for( j = i+1 ; j < length ; j++ ){
			if(arr[min]>arr[j]){
				//下标始终指向最大值
				min = j;
			}
		}
		//交换min和i
		if(min != i){
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

//搜索关键字
int search(int *arr,int length,int key){
	int start = 0;
	int end = length -1;
	while(start <= end ){
		//取中间数
		int mid = (end + start)/2;
		if( arr[mid] == key){
			return mid;
		}
		//如果中轴元素比key小，则要从右侧找
		if(arr[mid] < key){
			start = mid+1;
		}
		//如果中轴元素比key大，则要从左侧找
		if(arr[mid] > key){
			end = mid-1;
		}
	}
	return -1;
}

//打印数组元素
void printArr(int *arr,int length){
	int i = 0;
	while(i < length){
		printf("%d  ", arr[i]);
		i++;
	}
	printf("%s\n", "");
}

int main(){
	int length = 11;
	int arr[11] = {25,13,49,21,37,16,64,55,8,38,29};
	printArr(arr,length);
	sort(arr,length);
	printArr(arr,length);
	int key;
	scanf("%d",&key);
	int result = search(arr,length,key);
	printf("%d\n", result);
}
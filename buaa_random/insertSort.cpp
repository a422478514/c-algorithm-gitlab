#include<stdio.h>

void sortArr(int *arr,int length){
	//从第二个开始进行插入排序
	int i = 1 ; 
	for(; i < length; i++){
		int j = i-1;
		//保存交换带插入元素的值
		int temp = arr[i];
		if(arr[j]>temp){
			while(j>=0&&arr[j]>temp){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1] = temp;
		}	
	}
	return ;
}

void  printArr(int *arr,int n){
	int i = 0;
	for( ; i < n;i++){
		printf("%d\n", arr[i]);
	}
	return;
}

int main(){
	int arr[] = {3,1,5,9,10};
	printf("%s\n", "hello");
	int i = 0;
	int j = 0;
	int n = 5;
	printArr(arr,n);
	sortArr(arr,n);
	printArr(arr,n);
	return 0;
}
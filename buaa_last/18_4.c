#include<stdio.h>


int searchPosition(int val,int arr[],int start,int end){
	int mid = 0;
	while(start<=end){
		//每次都对比中间
		mid = (start + end)/2;
		if(arr[mid] == val){
			return mid+1;
		}
		if(arr[mid] > val){
			end = mid-1;
		}
		if(arr[mid] < val){
			start = mid + 1;
		}
	}
	return mid;
}

void insert(int val,int pos,int n,int arr[]){
	//在下标为pos的位置插入元素
	//元素后移
	while(n>pos){
		arr[n] = arr[n-1];
		n--;
	}
	arr[pos] = val;
}

int main(int argc, char const *argv[])
{
	int arr[20] = {1,2,3,4,5,6,7,8,9,10};
	int val = 10;
	int pos = searchPosition(val,arr,0,9);
	printf("%d\n", searchPosition(val,arr,0,9));
	insert(val,pos,10,arr);
	for (int i = 0; i < 20; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
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

int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", searchPosition(5,arr,0,9));
	return 0;
}
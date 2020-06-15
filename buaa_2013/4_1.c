#include <stdio.h>


void SORT(int A[ ], int n)
{
	int i, j, min, max, temp;
	i=1;
	while(i<=n/2){
		min=i;
		max=i;
		for(j=i+1;j<n-i+1;j++){
			if(A[j]<A[min])min=j;
			if(A[j]>A[max])
				max=j;
		}
		/* 确定某趟排序的最小值元素和最大值元素 */
		if(min!=i){
			temp=A[min]; A[min]=A[i]; A[i]=temp;
		}
		/* 交换 A[min]与 A[i]的位置 */
		if(max!=n-i+1){
			if(max==i){
				temp=A[min]; A[min]=A[n-i+1]; A[n-i+1]=temp;
			}else{
				 /* 交换 A[min]与 A[n-i+1]的位置 */
				temp=A[max]; A[max]=A[n-i+1]; A[n-i+1]=temp;
				/* 交换 A[max]与 A[n-i+1]的位置 */
			}
		}
		i++;
	}
}
int main(int argc, char const *argv[])
{
	int arr[10];
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 10-i;
	}
	SORT(arr,10);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
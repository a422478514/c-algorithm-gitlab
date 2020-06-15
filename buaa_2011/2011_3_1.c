#include<stdio.h>


void PURGE(int arr[],int *n){
	int i = 0,j,k;
	
	while(i < *n){
		j = i+1;
		while(j<*n){
			if(arr[j] == arr[i]){
				for (k = j; arr[k] == arr[k-1]; ++k)
					{
						arr[k-1] = arr[k];				
					}
				n--;
			}else{
				i++;
				j++;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n = 11;
	int arr[] = {0,1,1,1,2,2,2,2,2,3,3};
	PURGE(arr,&n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
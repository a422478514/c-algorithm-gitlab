#include <stdio.h>
#include <string.h>
#include <ctype.h>


int move(int *a,int n,int m){
	int *p,k,temp;
	for(k=1;k<=m;k++){
		temp= *(a+n-1);
		for (p=a+n-1; p>a ; p--)
		{
			*p=*(p-1);
		}
		*a=temp;
	}
}

//打印数组
void printArr(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6},n=6;
	printArr(a,n);
	move(a,n,2);
	printArr(a,n);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int cal(int a,int n){
	int sum=0,total=0;
	//计算出n个数
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		int cur = sum*10 +a;
		sum = cur;
		total +=sum;
	}
	printf("%d\n", total);
}

int main(int argc, char const *argv[])
{
	int a,n;
	scanf("%d",&a);
	scanf("%d",&n);
	cal(a,n);
	return 0;
}
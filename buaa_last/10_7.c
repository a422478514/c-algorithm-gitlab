#include<stdio.h>


int main(int argc, char const *argv[])
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int aa =0;//每轮要加的值
	int k = 1;
	scanf("%d %d",&a,&n);
	//循环n次，每次算出 a*
	for (int i = 0; i < n; ++i)
	{
		aa = 5 * k + aa;
		k*=10;
		printf("%d\n", aa);
		sum += aa;
	}
	printf("%d\n", sum);
	return 0;
}
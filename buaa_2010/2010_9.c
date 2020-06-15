#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	int arr[100];
	int input;
	int i=0;
	//移动指针
	int *p;
	//min指针，永远指向最小的元素
	int *min;
	int times=0;
	scanf("%d",&input);
	while(input!=-1){
		arr[i++]=input;
		scanf("%d",&input);
	}
	printf("size is %d\n", i);
	min=arr;
	p=arr+1;
	//比较出最小元素
	while((p++)<(&arr[i])){
		printf("%d\n", times++);
		if(*p<*min){
			//指向较小元素
			min=p;
		}
	}
	printf("low numbeer %d\n",*min);
	//元素前移
	while((min++)<(&arr[i])){
		*(min-1)=*min;
	}
	for (int k = 0; k < i; ++k)
	{
		printf("%d\n", arr[k]);
		/* code */
	}
	return 0;
}
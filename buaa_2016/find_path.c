#include <stdio.h>

void path(int *arr,int item){
	int path[5]={-1,-1,-1,-1,-1};
	int k =0;
	int i = -1;
	//找到目标结点下标
	for (i = 0; item != *(arr+i) && item; ++i);
	//计算父结点->祖先
	printf("i -> %d\n", i);
	while(i){
		if(i%2 == 0){
			path[k] = (i-1)/2;	
		}else{
			path[k] = i/2;	
		}
		i = path[k];
		k++;
	}
	//输出路径
	for (int j = 0; path[j] != -1; ++j)
	{
		printf("%d ->", path[j]);
	}

}


int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5,6,7};
	int item = 3;
	path(arr,item);
	return 0;
}
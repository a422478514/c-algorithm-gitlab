#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

#define N 1000

int main(int argc, char const *argv[])
{
	FILE *fp;
	int a[N],i,num,count;
	if((fp=fopen("/tmp/daquan/2.txt","r")) == NULL){
		printf("Can not open file!\n");
		return 0;
	}
	count = 0;
	while(fscanf(fp,"%d",&num)==1){
		//先把数字读进来
		a[count]=num;
		printf("%d\n", num);
		//逐一对比，找出第一个等于该数字的位置
		for (i = 0; a[i]!=num; ++i);
		//如果这个位置等于存储的位置，说明数组中还不存在该数字，则移动下标，否者不移动
		if(i==count)
			count++;
	}
	fclose(fp);
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", a[i]);
	}
	printf("%d\n", count);
	return 0;
}
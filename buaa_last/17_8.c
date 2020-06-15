#include<stdio.h>



int isnum(char c){
	return c >= '0' && c <= '9';
}

int charToNum(char c){
	return c-48;
}

//str 指向输入字符串  arr[i]保存解析出来的数字字符串
void filter(char *str,char arr[10][10]){
	int i = 0;//arr[i][j]
	int j = 0;
	int k = 0;//str的偏移量
	int tag = 0;//上一个是否数字
	while( *(str+k) ){
		if(isnum(*(str+k))){
			tag = 1;
			//是数字字符则放入arr[i][j]
			arr[i][j] = *(str+k);
			j++;
		}else{
			//不是数字，则判断tag
			//tag为1则标志上一个数字依然结束，i++ j要归0
			if(tag){
				//字符串结尾补个结束符
				arr[i][j] = '\0';
				i++;
				j = 0;
			}
			//否则 则是连续其它字符，忽略
			tag = 0;
		}
		k++;
	}
	for (int m = 0; m < 10; ++m)
	{
		printf("%s\n", *(arr+m));
	}
	
}

//字符串转数字，返回数组长度
int transform(char str[10][10],int a[]){
	int i = 0;//str[i][j]
	int k = 0;//a的下标
	for (i = 0; *str[i] ; ++i)
	{
		int num = 0;
		for (int j = 0; str[i][j]; ++j)
		{
			num = num*10 + charToNum(str[i][j]); 
		}
		a[k++] = num;
		printf("%s %d\n", str[i],num);
	}
	return k;
}


void copy(int n,int arr[],int arr2[]){
	//把数组copy到arr2
	for (int i = 0; i < n; ++i)
	{
		arr2[i] = arr[i];
	}
}
//从大到小输出数组中的元素
void output(int arr[],int k){
	int arr2[10];
	copy(k,arr,arr2);
	for (int i = 0; i < k; ++i)
	{
		printf("%d\n", arr2[i]);
	}
	//利用选择排序的思想先排序
	for (int i = 0; i < k; ++i)
	{
		int max = i;
		for (int j = i+1; j < k; ++j)
		{
			if(arr2[max] < arr[j])
				max = j;
		}
		//交换
		if(i!=max){
			int temp = arr2[i];
			arr2[i] = arr2[max];
			arr2[max] = temp;
		}
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%d\n", arr2[i]);
	}
}


int main(int argc, char const *argv[])
{
	char *str = "abc123de45f*#6?*789&";
	char a[10][10]={'\0'};
	int  b[10] = {0};
	int k = 0;
	filter(str,a);
	k = transform(a,b);
	output(b,k);
	return 0;
}
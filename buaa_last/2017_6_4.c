#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
	//文件指针
	FILE *fp;
	//保存待输入字符串
	char arr[200];
	//打开文件
	if( (fp=fopen("/tmp/1.txt","r")) == NULL ){
		printf("the file is empty\n");
		return 0;
	}
	//读入文件内容
	while(!feof(fp)){
		fgets(arr,110,fp);
	}
	//判断字符长度
	if(strlen(arr) == 0){
		printf("the file is empty\n");
		return 0;
	}
	printf("%s\n",arr );
	return 0;
}
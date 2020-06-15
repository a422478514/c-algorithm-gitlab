 #include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../common/base.c"

#define MAX 3
struct Student
{
	char name[40];
	int age;
}stu[MAX];


int main(int argc, char const *argv[])
{
	//文件指针
	FILE *fp;
	//打开文件
	if((fp=fopen("/tmp/daquan/157.txt","wb")) == NULL){
		printf("打开文件失败\n");
		return 0;
	}
	//键盘输入
	for (int i = 0; i < MAX; ++i)
	{
		scanf("%s %d",stu[i].name,&stu[i].age);
		fwrite(&stu[i],sizeof(struct Student),1,fp);
	}
	//写入文件结束
	fclose(fp);

	
	return 0;
}
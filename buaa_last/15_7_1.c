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
	struct Student s1;
	//打开文件
	if((fp=fopen("/tmp/daquan/157.txt","rb")) == NULL){
		printf("打开文件失败\n");
		return 0;
	}
	//键盘输入
	for (int i = 0; i < MAX; ++i)
	{
		fread(&stu[i],sizeof(struct Student),1,fp);
	}
	for (int i = 0; i < MAX; ++i)
	{
		printf("%s %d\n",stu[i].name,stu[i].age );
	}

	rewind(fp);
	fread(&s1,sizeof(struct Student),1,fp);
	printf("%s %d\n",s1.name,s1.age );
	//写入文件结束
	fclose(fp);

	
	return 0;
}
#include <stdio.h>




int main(int argc, char const *argv[])
{
	float sutndetScore[100]={0.0},avg = 0.0;
	char sutndetName[100][100]={""};
	int first = 0,second = 0, third = 0;
	int k = 0;
	//读文件
	FILE *fp;
	//读文件
	if((fp = fopen("/tmp/daquan/1.txt","r")) == NULL){
		//打开失败
		printf("打开失败\n");
		return 0;
	}
	//导入
	while(fscanf(fp,"%s %f",sutndetName[k],&sutndetScore[k]) > 0){
		k++;
	}
	for (int i = 0; i < k; ++i)
	{
		printf("%s\n", sutndetName[i]);
		printf("%f\n", sutndetScore[i]);
		avg += sutndetScore[i];
	}
	printf("平均数＝%f\n", avg/k);
	//找出最高成绩的三个人
	printf("成绩最高的几位：\n");
	if(k<=3){
		//全部打印
		for (int i = 0; i < k; ++i)
		{
			printf("%s\n", sutndetName[i]);
			printf("%f\n", sutndetScore[i]);
		}
	}
	//初始化
	//找出第一的
	first = 0;
	for (int i = 0; i < k; ++i)
	{
		if(sutndetScore[i] > sutndetScore[first]){
			first = i;
		}
	}
	//找出第二的
	second = 0;
	for (int i = 0; i < k; ++i)
	{
		if(i != first && sutndetScore[i] > sutndetScore[second]){
			second = i;
		}
	}
	//找出第三的
	third = 0;
	for (int i = 0; i < k; ++i)
	{
		if(i != first && i != second && sutndetScore[i] > sutndetScore[third]){
			third = i;
		}
	}

	printf("first name = %s  score = %f\n", sutndetName[first],sutndetScore[first]);
	printf("second name = %s  score = %f\n", sutndetName[second],sutndetScore[second]);
	printf("third name = %s  score = %f\n", sutndetName[third],sutndetScore[third]);

	fclose(fp);
	return 0;
}
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *f;
	char ch;
	if((f=fopen("/tmp/test1.txt","w+"))==NULL){
		puts("打开文件失败！");
		return 0;
	}
	//从界面夺取一个字符串
	ch=getchar();
	//如果不为回车
	while(ch != '\n'){
		fputc(ch,f);
		ch=getchar();
	}
	rewind(f);
	ch=fgetc(f);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(f);
	}
	fclose(f);
	return 0;
}
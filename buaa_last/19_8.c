#include<stdio.h>
#include<string.h>

//大写转小写
char toLower(char ch){
	if(ch>='A' && ch <='Z'){
		return ch+32;
	}
	return ch;
}
//分割字符串
int split(char *s,char words[100][20]){
	int i = 0 ;//words[i][j]
	int j = 0;//每个单词的输出位置
	int k = 0;//s的偏移量
	int start = 0;//标志已经找到一个新单词的开始
	char ch;//遍历到的字符
	//如果字符串不为空，则继续遍历
	while( (ch=*(s+k)) ){
		printf("%c\n", ch);
		//是否是特殊字符串
		if(ch == ' ' || ch == '\r' || ch == '\n' || ch == '\t'){
			j=0;//新单词的下标重置
			//如果是新单词的结束，接下来开始解析下一个单词
			if(start == 1){
				i++;
			}else{
				//如果不是新单词的结束
				//k++;
			}
		}else{
			start = 1;
			words[i][j]=toLower(ch);
			j++;
		}
		k++;
	}

	return 0;
}
//找变位词
int findChangeWord(char words[100][20],char pattern[20]){
	char newwords[100][20] = {'\0'};//保存处理后的字符串
	char newpattern[20];
	int k = 0;
	strcpy(newpattern,pattern);
	sortc(newpattern);
	//遍历words
	for (int i = 0; i < 100 && *words[i]; ++i)
	{
		//比较原始字符是否和 pattern相等
		if(strcmp(words[i],pattern)==0){
			//如果相等，则不是变位词，不处理
		}else{
			//如果不等，则对字符排序后再对比
			char temp[20];
			strcpy(temp,words[i]);
			//对temp排序并比较
			sortc(temp);
			printf("old=%s adjust=%s newpattern=%s\n",words[i],temp,newpattern);
			//排序后相等，则是变位词
			if(strcmp(temp,newpattern) == 0){
				//放到新数组
				strcpy(newwords[k],words[i]);
				k++;
			}
		}
	}
	//把newwords复制回words
	for (int i = 0;i < 100; ++i)
	{
		strcpy(words[i],newwords[i]);
	}
	return 0;
}
//给单词按字母排序
int sortc(char word[20]){
	for (int i = 0; i < 20 && word[i]; ++i)
	{
		int min = i;
		for (int j = i+1; word[j] && j < 20; ++j)
		{
			if(word[j] < word[min]){
				min = j;
			}
		}
		//交换
		if(min != i){
			char temp = word[i];
			word[i] = word[min];
			word[min] = temp;
		}
	}
	return 0;
}

//给多个单词排序
int sort(char words[100][20]){
	//选择排序
	for (int i = 0; *words[i]&&i < 100; ++i)
	{
		//指向第i个单词
		int min = i;
		for (int j = i+1; *words[j]&& j < 100; ++j)
		{
			//遇到比min小的字符串，交换
			if(strcmp(words[min],words[j]) > 0){
				min = j;
			}
		}
		//交换min和i
		if(min!=i){
			char temp[20];
			strcpy(temp,words[i]);
			strcpy(words[i],words[min]);
			strcpy(words[min],temp);
		}
	}
	return 0;
}
//打印多个单词
void printWords(char words[100][20]){
	for (int i = 0; i < 100; ++i)
	{
		if(*words[i])
		printf("%s\n", words[i]);
	}
}


int main(int argc, char const *argv[])
{
	FILE *fp;
	char filename[100];//保存文件名
	char baseword[20];//待对比的单词
	char words[100][20]={'\0'};
	char str[2000]={'\0'};
	char temp[2000]={'\0'};

	strcpy(filename,argv[1]);
	strcpy(baseword,argv[2]);

	printf("打开：%s\n", filename);
	printf("待对比单词：%s\n",baseword);


	if( (fp=fopen(filename,"r")) == NULL ){
		printf("打开文件失败！\n");
		exit(1);
	}
	//把文件内容读出来放到temp里
	printf("%s\n", str);
	while(!feof(fp)){
		fgets(temp,2000,fp);
		printf("%s\n", temp);
		//合并到str中
		strcat(str,temp);
	}
	printf("%s\n", str);

	//分割单词
	int result = split(str,words);
	printf("%d\n", result);

	fclose(fp);
	//打印数组
	printWords(words);
	sort(words);
	findChangeWord(words,baseword);
	printf("------------------------\n");
	//打印数组
	printWords(words);

	return 0;
}
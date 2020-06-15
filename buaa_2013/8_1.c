#include <string.h>
#include <stdio.h>

//找出最长单词
void maxword(char *s,char *t){
	//记录公共单词的长度，下标为单词顺序下标　从0开始
	int recordWordLengthArr[10];
	//记录公共单词的相对起始位置的偏移量，下标为单词顺序下标　从0开始
	int recordWordStart[10];
	//记录的偏移量
	int index = 0;
	//最长单词
	char maxWord[20];
	printf("s.length=%ld  t.length=%ld;\n", strlen(s),strlen(t));
	printf("赋初值\n");
	//１、赋初值
	for (int i = 0; i < 10; ++i)
	{
		recordWordLengthArr[i] = 0;
	}
	printf("双层for\n");
	//２、双层for循环
	//第一层循环　是定位s的每个单词的起始位置
	for(int i = 0 ; s[i] ; ){
		printf("当前s[i]=%c\n", s[i]);
		//第二层循环是比较s的某一个单词与t的所有单词
		for (int j = 0; t[j];){
			//字母偏移量
			int k = 0;
			printf("比较第i=%dj=%d\n", i,j);
			//字符串对比，如果对应位置的单词相等　且不为字符串结束('\0')　或者单词结束(空格)　则继续对比
			while( s[i+k] && s[i+k] == t[j+k] &&  s[i+k] !=' ' && t[j+k] != ' '){
				k++;
			}
			//判断对比结果，如果两单词对比到结束都相等，则记录
			if((s[i+k] == t[j+k] || (s[i+k] ==' ' && !t[j+k]) || (t[j+k] ==' ' && !s[i+k])) && (s[i+k] ==' ' || !s[i+k]) && (t[j+k] == ' ' || !t[j+k]) ){
				//s指向的单词和t指向的是一致的
				j=j+k+1;
				//保存对比结果
				recordWordLengthArr[index] = k;
				recordWordStart[index] = i;
				index++;
				break;
			}else{
				printf("比较第i+k=%dj+k=%d\n", i+k,j+k);
				//j应该偏移到下一个位置
				while(t[j] != ' ' && t[j]){
					j++;
				}
				if(t[j] == ' ') j++;
				//if(!t[j]) break;
			}
		}
		//i应跳到下个单词位置
		while(s[i]!=' ' && s[i]){
			i++;
		}
		//if(!s[i]) break;
		i++;
	}
	int max = 0;
	for (int i = 0; i < 10; ++i)
	{
		if(recordWordLengthArr[i]>recordWordLengthArr[max]){
			max = i;
		}
		printf("maxlenth is %d  start position is %d\n", recordWordLengthArr[i],recordWordStart[i]);
	}
	//保存最长串
	int pos = recordWordStart[max];
	int y=0;
	while(s[pos] && s[pos] != ' '){
		maxWord[y++] = s[pos];
		pos++;
	}
	maxWord[y] = '\0';
	//打印最长串
	puts(maxWord);	
}



//求最长公共子川
int main(int argc, char const *argv[])
{
	char s[50] = "This is C programming text";
	char t[50] = "This is a text for C programming";
	char *ret;
	maxword(s,t);
	return 0;
}
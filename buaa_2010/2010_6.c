#include <stdio.h>
#include <string.h>
#include <ctype.h>

void FUNC6(char *s){
	int i,t;
	char c[80];
	for (i = 0,t = 0; s[i]; i++)
	{
		/* code */
		if(!isspace(s[i])){
			printf("%c\n",s[i] );
			c[t++]=s[i];
		}
		c[t]='\0';
	}
	for (int i = 0; c[i]; ++i)
	{
		printf("%c\n", c[i]);
		/* code */
	}
	//这个字符串拷贝函数什么原理，是把c字符串里的'\0也复制过去了么'
	strcpy(s,c);
}

int main(int argc, char const *argv[])
{
	/* code */
	char c[]={'a','b','c',' ','d'};
	FUNC6(c);
	for (int i = 0; c[i]; ++i)
	{
		printf("%c\n", c[i]);
		/* code */
	}
	return 0;
}
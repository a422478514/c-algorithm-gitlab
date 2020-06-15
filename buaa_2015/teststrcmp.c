#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int strcmp1(char *s,char *t){
	for (;*s++==*t++; )
	{
		if(*s=='\0') return 0;
	}
	printf("%c :  %c\n", *s,*t);
	return (*s-*t);
}

int strcmp2(char *s,char *t){
	for (;*s++==*t++; )
	{
		if(!*s) return 0;
	}
	return (*s-*t);
}

int strcmp3(char *s,char *t){
	for (;*s==*t; )
	{
		if(*s=='\0'){
			return 0;
		}
		t++;
		s++;
	}
	return (*s-*t);
}

int strcmp4(char *s,char *t){
	for (;*s==*t;s++,t++)
	{
		if(*s=='\0') return 0;
	}
	return (*t-*s);
}


int main(int argc, char const *argv[])
{
	char *p={"abcd"},*q={"abcdeb.mi.com"};
	int s1 = strcmp1(p,q);
	int s2 = strcmp2(p,q);
	int s3 = strcmp3(p,q);
	int s4 = strcmp4(p,q);
	printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s3);
	printf("%d\n", s4);
	return 0;
}
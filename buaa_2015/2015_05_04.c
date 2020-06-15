#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
	char s[100]={"adsvbdfrzxbverhseyukjh"},*p,*q,*r,ch;
	//选择拍哦徐
	for (p=s;*p;p++)
	{
		for (q=r=p;*q;q++)
		{
			if(*r>*q){
				//r指向最小的字符
				r=q;
			}
		}
		//交换最小的
		if(r!=p){
			ch = *r;
			*r = *p;
			*p = ch;
		}
	}
	puts(s);
	for (p=s; *p; p++)
	{
		for (q=p;*p==*q;q++);
		strcpy(p+1,q);
	}
	printf("111\n");
	puts(s);
	return 0;
}
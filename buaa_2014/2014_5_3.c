#include <stdio.h>
#include <string.h>

int compstr(const char *s1,const char *s2)
{
    for(;*s1==*s2;++s1,++s2)
    {
        if (*s1=='\0')
            return 0;
    }
    return ((*(unsigned char *)s1<*(unsigned char *)s2)?-1:+1);
}

int main(int argc, char const *argv[])
{
	char arr[10] = "abcd";
	char arr2[10] = "abcde";
	printf("1111111%d\n", compstr(arr,arr2));
	return 0;
}
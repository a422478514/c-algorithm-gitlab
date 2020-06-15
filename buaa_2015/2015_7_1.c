#include <stdio.h>
#include <stdlib.h>


void fun(char s[],int n)
{
    int i;
    int max=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]>max)
            max=s[i];
    }
    printf("str=%c ascii=%d\n",max,max);
}

int main()
{
    char s[100]={0};
    char x;
    int i=0;
    while((x=getc(stdin))!=EOF)
    {
        s[i++]=x;
    }
    // while(scanf("%c",&x)!=EOF)
    // {
    //     if(x!='\n')
    //         s[i++]=x;
    // }
    for(int j=0;j<i;j++)
    printf("%c",s[j]);
    printf("\n");
    fun(s,i);
    system("pause");
    return 0;
}
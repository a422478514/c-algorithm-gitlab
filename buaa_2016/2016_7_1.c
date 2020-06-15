#include <stdio.h>

int strcmp_nc(char *s1,char *s2){ 
	int i = 0;
	int j = 0;
	while( *(s1+i) && *(s2+j) && (*(s1+i) == *(s2+j) || (*(s1+i)+32) == *(s2+j) || *(s1+i) == (*(s2+j)+32)) ){
		i++;j++;
	}
	//其中一个遍历到头了
	if( !*(s1+i) || !*(s2+j)){
		//都遍历到头了，则是相等的
		if(!*(s1+i) && !*(s2+j)){
			return 0;
		}
		if(*(s1+i)){
			return 1;
		}
		if(*(s2+j)){
			return -1;
		}
	}else{
		//遍历到不一样的字符串了
		char s1Temp,s2Temp;
		if(*(s1+i) > 96){
			s1Temp = *(s1+i) -32;
		}
		if(*(s2+j) > 96){
			s2Temp = *(s2+j) -32;
		}
		return s1Temp -s2Temp;
	}
}

int main(int argc, char const *argv[])
{
	char *s1 = "abcdefAbcdfe";
	char *s2 = "AbcdefAbcdfeasd";
	int result = strcmp_nc(s1,s2);
	printf("%d\n", result);
	return 0;
}
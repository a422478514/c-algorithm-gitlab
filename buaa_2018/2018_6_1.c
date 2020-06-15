#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int i=0,j=0,count=0;
	for(i=0;i<100;i++){
		for (j = 100; j >= i;j -= 2)
		{
			count += j-i;
		}
	}
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	// while(i<100){
	// 	j=100;
	// 	while(j>=i){
	// 		count +=j-i;
	// 			j-=2;
	// 	}
	// 	i++;
	// }
	printf("count=%d\n", count);
	return 0;
}
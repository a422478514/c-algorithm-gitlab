#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int MINPRIME(int num){
	int k,j;
	k=num+1;
	while(1){
		for (j = 2; j <= k-1; j++){
			printf("j=%d  k=%d\n",j,k );
			if(k%j == 0){
				break;
			}
		}
		printf("j=%d  k=%d\n",j,k );
		if(j>k-1){
			return k;
		}else{
			k++;
		}
	}
}

int main(int argc, char const *argv[])
{
	int num=1111,min;
	min = MINPRIME(num);
	printf("%d\n", min);
	return 0;
}
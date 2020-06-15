#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int mo=7,max;

	switch(mo){
		case 1:
			max = 31;
		break;
		case 2:
			max = 28;
		break;
		case 3:
			max = 31;
		break;
		case 4:
			max = 30;
		break;
		case 5:
			max = 31;
		break;
		case 6:
			max = 30;
		break;
		default:
			max = 0;
	}
	printf("%d\n", max);
	return 0;
}
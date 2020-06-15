#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	char option = 'W';
	switch(option){
		case 'H': printf("Hello\n");
		case 'W': printf("Welcome\n");
		case 'B': printf("Bye\n");
		break;
	}
	return 0;
}
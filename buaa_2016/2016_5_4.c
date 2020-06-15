#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

typedef struct 
{
	char name[10];
	int number;
	struct 
	{
		int year;int month;int day;
	} date;
}Book;

int main(int argc, char const *argv[])
{
	Book book,*pbook=&book;
	strcpy(pbook->name,"program");
	pbook->date.year = 2015;
	printf("%s\n", book.name);
	printf("%d\n", book.date.year);
	return 0;
}
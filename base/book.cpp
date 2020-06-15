#include <iostream>

using namespace std;

struct Books
{
	int id;
	char name[50];
} book = {1,"荒野奇谭"};

int main(){
	cout << book.id << endl;
	cout << book.name << endl;
	return 0;
}
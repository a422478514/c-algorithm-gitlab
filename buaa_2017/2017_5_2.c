

int main(int argc, char const *argv[])
{
	int a=0;
	int b = a++;
	int c = a+(++b);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}
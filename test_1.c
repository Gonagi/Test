#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)
		printf("%d ", i);

	for (int i = 10; i < 20; i++)
		printf("%d\n", i);
	
	for (int i = 20; i < 30; i++)
		printf("%d\n", i);
	printf("ABCD\n");
	printf("abcd\n");

	for (int i = 30; i < 40; i++)
		printf("%d ", i);

	return 0;
}
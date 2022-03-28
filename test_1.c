#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)
		printf("%d ", i);

	for (int i = 10; i < 20; i++)
		printf("%d\n", i);
	
	printf("ABCD\n");
	printf("abcd\n");
	return 0;
}
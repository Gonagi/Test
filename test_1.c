#include <stdio.h>

int main()
{
	printf("Sync!\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", i);

	for (int i = 10; i < 20; i++)
		printf("%d\n", i);
	
	for (int i = 20; i < 30; i++)
		printf("%d\n", i);

	printf("ABCD\n");
	printf("abcd\n");

	for (int i = 30; i < 40; i++)
		printf("%d\n", i);

	printf("conflicts!\n");
	printf("Resolve conflicts.n");
	
	printf("원격저장소\n");

	printf("user2 push\n");
	
	return 0;
}
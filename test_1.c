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
		printf("%d\n", i);

	while (1) {
		break;
	}

	printf("conflicts!\n");
	printf("Resolve conflicts.n");
	
	printf("원격저장소\n");

	printf("user2 push\n");

	printf("Gonagi push 15:56\n");
	
	printf("user2 15:54 push\n");
	
<<<<<<< HEAD
	for(int i = 100; i > 0; i--)
=======

	for (int i = 0; i < 100; i++)
>>>>>>> f40eefeaace8f2b321ca7c6df7378c64f6868274
		printf("%d ", i);

	return 0;
}
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
<<<<<<< HEAD

	printf("Gonagi push 15:56\n");

=======
	
	printf("user2 15:54 push\n");
	
>>>>>>> 2d4cae1d8b7eede129a1f0072009504faa1ac9e6
	return 0;
}
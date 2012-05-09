#include <stdio.h>

void one_tree(void);
void two(void);

int main(void)
{
	printf("Starting now:\n");
	one_tree();
	printf("done!\n");

	return 0;
}

void one_tree(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}

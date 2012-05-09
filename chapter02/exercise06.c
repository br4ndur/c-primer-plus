#include <stdio.h>

void smile(int);

int main(void)
{
	int i;
	for (i = 3; i > 0; --i) {
		smile(i);
	}

	return 0;
}

void smile(int num)
{
	int i;
	for (i = 0; i < num; ++i) {
		printf("Smile!");
	}
	printf("\n");
}

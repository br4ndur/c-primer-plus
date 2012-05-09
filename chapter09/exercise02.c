#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	chline('#', 5, 10);
	return 0;
}

void chline(char ch, int i, int j)
{
	int k = 0;
	for(k = 1; k < i; k++)
		putchar(' ');

	while(k++ <= j)
		putchar(ch);

	putchar('\n');
}

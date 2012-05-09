#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	const int intMax = INT_MAX;

	printf("Integer overflow: %d\n", intMax+1);
	printf("Float overflow: %f\n", FLT_MAX*2);
	printf("Float underflow: %e\n",  (1e20+1)-1e20);

	return 0;
}

#include<stdio.h>
int main(void)
{
	int count, hap = 0;

	for (count = 1, count <= 10, count+=2)
	{
		hap += count;
		printf("hap=%d, count=%d\n", hap, count);
	}
	printf("%d\n", hap);
	return 0;
}
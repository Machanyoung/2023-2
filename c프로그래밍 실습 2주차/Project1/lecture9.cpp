#include<stdio.h>
int main(void)
{
	int count, hap;
	count = 1, hap = 0;
	while (count <= 10)
	{
		hap += count;
		count++;
	}
	printf("%d\n", hap);
	return 0;
}
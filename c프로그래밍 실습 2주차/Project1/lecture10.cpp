#include<stdio.h>
int main(void)
{
	int a, b;
	int a = 1;
	int b = 2;
	while (a < 10)
	{
		if (a == 5)
		{
			a++;
			continue;
		}

		while (b < 10)
		{
			printf("d * %d = %d\n", a, b, a*b);
			b++;
		}
		a++;
		b = 1;
	}
}
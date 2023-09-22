#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
	int i = 0;
	double x = 0;
	double y = 0;
	double circle = 0;
	double count = 0;

	srand((double)time(NULL));
	while (1)
	{
		for (i = 0; i < 100000; i++)
		{
			x = (double)rand() / (double)RAND_MAX;
			y = (double)rand() / (double)RAND_MAX;
			if (i % 1000 == 0) {
				printf("%0.0f, ¿øÁÖÀ² = %0.15f\n", count, (circle / count) * 4);
			}
			count++;
			if ((x * x) + (y * y) <= 1)
			{
				circle++;
			}
		}
	}


}
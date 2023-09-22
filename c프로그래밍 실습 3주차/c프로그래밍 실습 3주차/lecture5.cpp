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
	for (i = 0; i < 1000000000; i++){
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if ((x * x) + (y * y) <= 1){
			circle++;
		}
		if (i % 10000000 == 0) {
			printf("%3d%%% 진행..", int(count)+1);
			printf("원주율 : %.6f ", ((circle / count) * 4)/10000000);
			for (int progress = 0; progress < int(count / 5); progress++) {
				printf("■");
			}
			for (int progress_false = 0; progress_false < 20-(int(count / 5)); progress_false++){
				printf("□");
			}
			printf("\n");
			count++;
		}
	}
}
﻿#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 3; a++)
	{
		for (b = a; b <= 5 - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
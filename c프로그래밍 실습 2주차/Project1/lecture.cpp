#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("1.정수입력");
	scanf_s("%d, &num");
	printf("2.키보드로 입력받은 값은 %d", num);
	return 0;
}
#include<stdio.h>
int main(void)
{
	int a;
	printf("���� �Է� : \n");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
	return 0;
}
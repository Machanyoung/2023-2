#include <stdio.h>

void calculator(int selctor);
//��Ģ���� �Լ� ����
double sum(double a1, double a2);
double sub(double b1, double b2);
double mul(double c1, double c2);
double div(double d1, double d2);
int main(void)
{
	int sel;

	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������ : ");
	scanf_s("%d", &sel);

	calculator(sel);
	return 0;
}


void(calculator(int selector{ double num1, num2;

	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);

	printf("Result = %lf")
	}))
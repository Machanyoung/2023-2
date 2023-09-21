#include <stdio.h>

void calculator(int selctor);
//사칙연산 함수 선언
double sum(double a1, double a2);
double sub(double b1, double b2);
double mul(double c1, double c2);
double div(double d1, double d2);
int main(void)
{
	int sel;

	printf("1.더하기 2.빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	calculator(sel);
	return 0;
}


void(calculator(int selector{ double num1, num2;

	printf("숫자 1을 입력하시오 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오 : ");
	scanf_s("lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);

	printf("Result = %lf")
	}))
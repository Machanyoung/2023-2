#include<stdio.h>

int main(void)
{
	int year;
	printf("�Ǻ��ϰ���� ������ �Է��ϼ���.\n");//�Է¹ޱ�
	scanf_s("%d", &year);

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)//������ ���
		printf("%d���� ����\n", year);
	else
		printf("%d���� ���\n", year);//������ ó��
}
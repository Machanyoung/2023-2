#include<stdio.h>
int main(void)
{
	char season;

	printf("�� : A �Ǵ� a\n");
	printf("���� : S �Ǵ� s\n");
	printf("���� : D �Ǵ� d\n");
	printf("�ܿ� : F�Ǵ� f\n");
	printf("�����ϴ� ��¿�� �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'a':
	case 'A':
		printf("������ ���� : ��");
		break;

	case 'S':
	case 's':
		printf("������ ���� : ����");
		break;

	case 'D':
	case 'd':
		printf("������ ���� : ����");
		break;

	case 'F':
	case 'f':
		printf("������ ���� : �ܿ�");
		break;
	}
	return 0;

}
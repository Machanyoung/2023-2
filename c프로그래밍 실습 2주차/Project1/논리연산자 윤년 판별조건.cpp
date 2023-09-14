#include<stdio.h>

int main(void)
{
	int year;
	printf("판별하고싶은 연도를 입력하세요.\n");//입력받기
	scanf_s("%d", &year);

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)//윤년일 경우
		printf("%d년은 윤년\n", year);
	else
		printf("%d년은 평년\n", year);//나머지 처리
}
#include<stdio.h>
#include<stdlib.h>

int main(){
	int num_student;
	printf("�л� �� �Է� :");
	scanf_s("%d", &num_student);

	int* score;
	score = (int*)malloc(sizeof(int) * num_student);
	for (int i =0 ; i < num_student; i++) {
		printf("�л� # %d-%d ���� �Է� :", num_student, i + 1);
		scanf_s("%d", score + 1);
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += score[i];
	}
	printf("���� : %d", sum);
}
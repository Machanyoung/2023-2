#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() {
	int num_student;
	printf("�л� �� �Է� :");
	scanf_s("%d", &num_student);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_student);
	for (int i = 0; i < num_student; i++) {
		printf("�л� # %d-%d �й� �Է� :", num_student, i + 1);
		scanf_s("%d", &(std[i].sno));
		printf("�л� # %d-%d �̸� �Է� :", num_student, i + 1);
		scanf_s("%s", (std[i].name),10);
		printf("�л� # %d-%d ���� �Է� :", num_student, i + 1);
		scanf_s("%d", &(std[i].score));
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += std[i].score;
	}
	printf("���� : %d", sum);
}
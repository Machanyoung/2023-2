#include<stdio.h>
#include<stdlib.h>

int main(){
	int num_student;
	printf("학생 수 입력 :");
	scanf_s("%d", &num_student);

	int* score;
	score = (int*)malloc(sizeof(int) * num_student);
	for (int i =0 ; i < num_student; i++) {
		printf("학생 # %d-%d 성적 입력 :", num_student, i + 1);
		scanf_s("%d", score + 1);
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += score[i];
	}
	printf("총점 : %d", sum);
}
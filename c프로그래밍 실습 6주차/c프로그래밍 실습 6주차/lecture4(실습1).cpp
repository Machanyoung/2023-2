#include<stdio.h>
void swap(int* pa, int* pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}
int main() {
	int a = 10;
	int b = 50;
	//swap()�Լ� ȣ�� ��
	printf("%d, %d", a, b);
	//swap()�Լ� ȣ�� ��
	swap(&a, &b);
	printf("%d,%d\n", a, b);
	return 0;
}
#include<stdio.h>
void swap(int* pa, int* pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}
int main() {
	int a = 10;
	int b = 50;
	//swap()함수 호출 전
	printf("%d, %d", a, b);
	//swap()함수 호출 후
	swap(&a, &b);
	printf("%d,%d\n", a, b);
	return 0;
}
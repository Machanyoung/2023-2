#include<stdio.h>
void swap(int* pa, int* pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}
void sort(int arr,int m) {
	for (int i = 0; i < 5; i++) {

	}
}
int main() {
	int arr[5] = { 5,4,1,2,3 };
	//sort()함수 호출 전
	printf("arr[5]=%d", arr[5]);
	//sort()함수 호출 전
	sort(arr[5], 5);
	printf("arr[5]=%d", arr[5]);
	return 0;
}
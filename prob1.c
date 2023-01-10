//제시된 테스트 데이터 모두 통과
#include<stdio.h>


int main(void) {
	int num;
	printf("양의 정수 하나 입력\n");
	scanf_s("%d", &num);
	
	while (num > 0) {
		num = num / 2;
		printf("%d ", num);
	}
	printf("\n");

	return 0;
}
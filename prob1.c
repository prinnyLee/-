//���õ� �׽�Ʈ ������ ��� ���
#include<stdio.h>


int main(void) {
	int num;
	printf("���� ���� �ϳ� �Է�\n");
	scanf_s("%d", &num);
	
	while (num > 0) {
		num = num / 2;
		printf("%d ", num);
	}
	printf("\n");

	return 0;
}
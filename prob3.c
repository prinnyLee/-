//���õ� �׽�Ʈ ������ ��� ����
#include<stdio.h>

int main(void) {
	int num, arr[100];
	printf("���� �ƴ� �����Է�\n");

	while(1){
		printf(" ");
		scanf("%d", &num);
		
		if (num < 0) {
			break;
		}
		int min;
		for (int i = 0; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				if (arr[i] > arr[j]) {
					min = arr[i];
					arr[i] = arr[j];
					arr[j] = min;
				}
			}
		}
		
	}
		for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);

		
	}
	return 0;
}
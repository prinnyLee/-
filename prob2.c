//���õ� �׽�Ʈ ������ ��� ���
#include<stdio.h>

int main(void) {
	int n, arr[100];
	printf("2�� 100������ ����\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int min;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				min = arr[i];
				arr[i] = arr[j];
				arr[j] = min;
			}
		}
	}//������������ �迭
	for (int i = 0; i < 2; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
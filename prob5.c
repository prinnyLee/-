//���õ� �׽�Ʈ ������ ���
#include<stdio.h>

int main(void) {
	int n, arr[100];
	 int count = 0;
	printf("���� �Է�\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}//n���� �Է��Ѵٴ°� �Է¹ް� �׸�ŭ�� ������ �Է¹���
	int min;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				min = arr[i];
				arr[i] = arr[j];
				arr[j] = min;
			}
		}
	}//�Է¹��� ������ ������������ �迭


	
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
		}
		else{
			count++;//else�� ����Ҷ����� �ϳ��� ����
		}
	}//���� ���� ��¿��� ����
	printf("%d : ", count);

	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
		}
		else {
			printf("%d ", arr[i]);
		}
	}//���� ���� ��¿��� ����
	

	return 0;
}
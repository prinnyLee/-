//���õ� �׽�Ʈ ������ ��� ���
#include<stdio.h>
int main(void) {
	int n, k, arr[100], absr[100], absmin;
	printf("�Էµ� ������ ����\n");
	scanf_s("%d", &n);
	printf("���� �Է�\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("����k�� �Է�>>");
	scanf_s("%d", &k);

	int x;
	for (int i = 0; i < n; i++) {
		if ((arr[i] - k) >= 0) {
			absr[i] = arr[i] - k;
		}
		else {
			absr[i] = k - arr[i];
		}
	}
	absmin = absr[0];
	for (int i = 0; i < n; i++) {
		if (absmin > absr[i]) {
			absmin = absr[i];
			x = i; //���밪�� ���� ���� ���Ҹ� ã�Ƴ��� ���ڸ� �̾ƾ���
		}

	}
	

	printf("k���� ������ ���밪�� ���� ���� ���� %d\n", arr[x]);

	return 0;
}



	

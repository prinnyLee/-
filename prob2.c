//제시된 테스트 데이터 모두 통과
#include<stdio.h>

int main(void) {
	int n, arr[100];
	printf("2와 100사이의 정수\n");
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
	}//오름차순으로 배열
	for (int i = 0; i < 2; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
//제시된 테스트 데이터 모두 통과
#include<stdio.h>
int main(void) {
	int n, k, arr[100], absr[100], absmin;
	printf("입력될 정수의 개수\n");
	scanf_s("%d", &n);
	printf("정수 입력\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("정수k를 입력>>");
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
			x = i; //절대값이 가장 작은 윈소를 찾아내는 숫자를 뽑아야함
		}

	}
	

	printf("k와의 차이의 절대값이 가장 작은 정수 %d\n", arr[x]);

	return 0;
}



	

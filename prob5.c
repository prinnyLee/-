//제시된 테스트 데이터 통과
#include<stdio.h>

int main(void) {
	int n, arr[100];
	 int count = 0;
	printf("정수 입력\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}//n개를 입력한다는걸 입력받고 그만큼의 정수를 입력받음
	int min;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				min = arr[i];
				arr[i] = arr[j];
				arr[j] = min;
			}
		}
	}//입력받은 정수를 오름차순으로 배열


	
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
		}
		else{
			count++;//else를 통과할때마다 하나씩 증가
		}
	}//같은 숫자 출력에서 제외
	printf("%d : ", count);

	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
		}
		else {
			printf("%d ", arr[i]);
		}
	}//같은 숫자 출력에서 제외
	

	return 0;
}
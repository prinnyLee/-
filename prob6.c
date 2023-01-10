//제시된 데이터 통과 못함
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double prob(int N, int k);//함수 선언

int main(void) {
	
	int num;
	double r[6];
	srand((unsigned int)time(NULL));//time 함수,난수 초기화
	
	for (int i = 1; i <= 6; i++) {
	
		printf("%d: %lf\n", i, r[i]);
	}

	return 0;
}
double prob(int N, int k) {
	int r, count, per, pass;
	for (int j = 0; j < 10e6; j++) {
		for (int i = 0; i < N; i++) {
			r = rand() % 6 + 1;
			if (r == 1) {
				count++;
			}
			if (count >= k) {
				pass++;
			}

		}
	}
	per = pass / N;
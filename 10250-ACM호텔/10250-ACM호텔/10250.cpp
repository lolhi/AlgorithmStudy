#include<stdio.h>
#include<stdlib.h>

int main() {
	int T, H, W, N;
	int quotient = 0, remainder = 0;

	scanf("%d", &T);

	int* result = (int*)malloc(sizeof(int)*T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);

		quotient = N / H;
		remainder = N % H;

		//����ó�� �������� 0�϶� �����۵� ����
		if (remainder == 0) {
			remainder = H;
			quotient -= 1;
		}

		result[i] = remainder * 100 + quotient + 1;
	}

	for(int i = 0; i < T; i ++)
		printf("%d\n", result[i]);
}
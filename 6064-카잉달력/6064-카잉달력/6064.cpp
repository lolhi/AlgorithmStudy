#include<stdio.h>
#include<stdlib.h>

int getLCM(int a, int b);
int main() {
	int T;
	int* result;

	scanf("%d", &T);

	result = (int*)malloc(sizeof(int*)*T);

	//Ư�� �� X �� M,N���� ���� �������� x,y�� �Ǵ°��� ã�ƾ���. 
	int X;

	for (int r = 0; r < T; r++) {
		int M, N, x, y;
		scanf("%d %d %d %d", &M, &N, &x, &y);

		int lcm = getLCM(M, N);

		for (X = x; X <= lcm; X = X + M) {
			int remainder = X % N;
			if (remainder == 0)
				remainder = N;

			if (remainder== y)
				break;
		}
		if (lcm < X)
			result[r] = -1;
		else
			result[r] = X;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", result[i]);
	}
}

int getLCM(int a, int b) {
	int temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	for (int i = b; ; i += b) {
		if (i % a == 0)
			return i;
	}

	return -1;
}
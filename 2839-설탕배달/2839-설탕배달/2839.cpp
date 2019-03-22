#include<stdio.h>

int main() {
	int N,i;
	int quotient =0, remainder = 0;
	
	scanf("%d", &N);

	quotient = N / 5;
	remainder = N % 5;

	while (quotient != -1) {
		if (remainder % 3 == 0) {
			quotient += remainder / 3;
			break;
		}
		else {
			quotient -= 1;
			remainder += 5;
		}
	}
	
	printf("%d", quotient);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>

int square(int x);

int main(void) {
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d\n", square(i));

		
	}
	printf("\n");
	system("pause");
	return 0;
}

int square(int x) {
	x = x * x;
	return x;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolldice(void);

int main(void) {
	int sum, mypoint;
	int a;
	srand(time(NULL));
	sum = rolldice();

	mypoint = sum;
	printf("my point =%d\n", mypoint);
	if (sum == 7 || sum == 11) {
		a = 0;
		printf("Your are winner\n");
	}
	else if (sum == 2 || sum == 3 || sum == 12) {
		a = 0;
		printf("Your are loser\n");
	}
	else a = 1;
	
	while(a==1) {

		sum = rolldice();
		printf("%d\n", sum);
		if (sum == mypoint) {
			printf("winner\n"); a = 0;
		}
		else if (sum == 7) {
			printf("loser\n"); a = 0;
		}

	}
	system("pause");
	return 0;

}

int rolldice(void) {

	int a, b,result;
	a = (1 + rand() % 6);
	b = (1 + rand() % 6);

	result = a + b;
	return result;
}
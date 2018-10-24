#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {

	int i; double a;
	for (i = 1; i <= 10; i++) {
		a = pow(i, 0.5);
		printf("%.2f \n", a);
	}


	system("pause");
	return 0;
}

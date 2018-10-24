#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int a,i;
   
	
	srand(time(NULL));
	for (i = 1; i <= 20; i++) {
		a = (1+(rand() % 6));
		printf("%10d", a);
		if (i % 5 == 0) { printf("\n"); }
	}

	system("pause");
	return 0;

}
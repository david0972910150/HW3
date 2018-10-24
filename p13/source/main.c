#include<stdio.h>
#include<stdlib.h>

double power(float number, int power);
int  b; float a;
int main(void) {

	printf("enter a number¡G");
	scanf_s("%f", &a);
	printf("enter the power¡G");
	scanf_s("%d", &b);

	printf("%.2f", power(a, b));
	system("pause");
	return 0;


}

 double power(float number, int power) {

	 int i;
	 float result = 1;
	 for (i = b; i >= 1; i--) {
		 result = result * a;
	 }
	 return result;
}
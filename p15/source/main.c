#include<stdio.h>
#include<stdlib.h>

int Max(int a, int b, int c);
int Min(int a, int b, int c);
int main(void) {
	int x, y, z;
	printf("enter three number¡G");
	scanf_s("%d%d%d", &x,&y,&z);

	printf("max=%d\n", Max(x,y,z));
    printf("min=%d\n", Min(x,y,z));

	system("pause");
	return 0;

}

int Max(int a, int b, int c) {
	int maxium;
	maxium = a;
	if (b > a) { maxium = b; }
	if (c > a) maxium = c; 

	return maxium;
	
}

int Min(int a, int b, int c) {
	int minium;
	 minium = a;
	 if (b < a) minium = b; 
	 if (c < a) minium = c;

	return minium;

}
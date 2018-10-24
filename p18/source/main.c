#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	char string1[60] = "welcome";
	char string2[60];

	strcpy_s(string2,60, string1);
	printf("string2=%s\n", string2);

	int lengh;
	lengh = strlen(string2);
	printf("¦r¦êªø«×=%d\n", lengh);

	system("pause");
	return 0;
	
}

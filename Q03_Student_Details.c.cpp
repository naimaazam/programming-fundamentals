#include <stdio.h>
int main() {
	int age;
	float height;
	char grade[40];
	printf("what is your age? \n");
	scanf("%d", &age);
	printf("what is your height? \n");
	scanf("%g", &height);
	printf("what is your grade? \n");
	scanf("%s", &grade);
	printf("age: %d \n",age);
	printf ("height: %g \n",height);
	printf ("grade: %s \n",grade);
}


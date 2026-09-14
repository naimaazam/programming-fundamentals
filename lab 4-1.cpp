#include <stdio.h>
int main() {
	int num1,num2,num3;
	printf("Enter three integers to check \n");
	scanf ("%d%d%d" , &num1,&num2,&num3);
    
	if(num1==num2 && num2==num3){
		printf("all the numbers are equal\n");
	}
    else if (num1 == num2 && num1 > num3) {
        printf("Num1 and Num2 are equal and greatest: %d\n", num1);
    }
    else if (num1 == num3 && num1 > num2) {
        printf("Num1 and Num3 are equal and greatest: %d\n", num3);
    }
    else if (num2 == num3 && num2 > num1) {
        printf("Num2 and Num3 are equal and greatest: %d\n", num2);
    }
    else if (num1 > num2 && num1 > num3) {
        printf("Num1 is the greatest: %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3) {
        printf("Num2 is the greatest: %d\n", num2);
    }
    else {
        printf("Num3 is the greatest: %d\n", num3);
    }

    return 0;
}

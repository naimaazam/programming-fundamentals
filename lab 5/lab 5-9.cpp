#include <stdio.h>
#include <math.h>
int main(){
int choice;
double num, base, exponent;
    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);
            if(num >= 0){
                printf("Square root = %.2lf\n", sqrt(num));
            }
            else{
                printf("Invalid input: Square root of a negative number is not allowed.\n");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &base);
			printf("Enter exponent: ");
            scanf("%lf", &exponent);
			printf("Power = %.2lf\n", pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Absolute value = %.2lf\n", fabs(num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num); 
			printf("Floor = %.2lf\n", floor(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Ceiling = %.2lf\n", ceil(num));
            break;

        default:
            printf("Invalid menu choice.\n");
    }
    return 0;
}

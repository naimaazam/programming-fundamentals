#include <stdio.h>
int main()
{
	int pin, digit, sum=0; 
	 printf("enter pin:\n");
     scanf("%d",&pin);
     while(pin>0){
     	digit = pin % 10;
     	sum = sum + digit;
     	pin = pin / 10;
     } 
     printf("sum of the digits is = %d\n", sum);
     	if(sum>10){
     		printf("Strong pin");
        }
     		else{
     			printf("Weak pin");
     		}
     	
    
	return 0;
}



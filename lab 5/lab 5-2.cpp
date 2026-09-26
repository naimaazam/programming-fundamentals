#include<stdio.h>
int main(){
	int age, income, score, status;
	printf("enter your age:\n");
	scanf("%d",&age);
	printf("enter your income:\n");
	scanf("%d",&income);
    printf("enter your credit score:\n");
    scanf("%d",&score);
    printf("do you have existing loan?\n press 1 for yes and 0 for no\n ");
    scanf("%d",&status);
    if (age>=21 && income>=100000 && score>=750 && status==0){
    	printf("high approval chance\n");
    }
    	else if (age>=21 && income>=75000 && score>=650 && status==1){
    		printf("requires manual review\n");
		}
		else if (age>=21 && income>=50000 && score>=600){
			printf("possibly eligible\n");
		}
		else{
			printf("rejected\n");
		}
		return 0;
		
	
	
}

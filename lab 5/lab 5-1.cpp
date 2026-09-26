#include<stdio.h>
int main (){
	int programming, mathematics, AI, total;
	float attendance, average;
	printf("enter marks for programming:\n");
	scanf("%d", &programming);
	printf ("enter marks for mathematics:\n");
	scanf("%d", &mathematics); 
	printf("enter marks for AI:\n");
	scanf("%d", &AI);
	printf("enter your attendance percentage:\n");
	scanf("%f", &attendance);
	if(programming>=50 && mathematics>=50 && AI>=50 && attendance>=75){
		total=programming+mathematics+AI;
		average=total/3;
		}
		else{
			printf("student is not eligible\n");
		}
		if(average>=80){
			printf("excellent\n");
		}
        else if(average>=70){
			printf("very good\n");
		}
		else if(average>=60){
			printf("good\n");
		}
		else if(average>=50){
			printf("satisfactory\n");
		}
		else{
			printf("poor\n");
		}
		return 0;
	}
				
			
		


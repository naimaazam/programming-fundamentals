#include <stdio.h>
int main(){
	int score;
	printf("enter your confidence score\n");
	scanf("%d",&score);
	if (score <0 || score>100){
		printf("invalid score\n");
	}
	else if (score>0 && score<50){
		printf("loww confidence\n");
	}
	else if (score>=50 && score<80){
		printf("moderate confidence\n");
	}
	else{
		printf("high confidence\n");
	}
	return 0;
}

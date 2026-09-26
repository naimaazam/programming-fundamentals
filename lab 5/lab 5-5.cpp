#include <stdio.h>
int main(){
	int confidence;
	int user;
	printf("enter AI face-recognition confidence score\n");
	scanf("%d",&confidence);
	printf("enter user type:\n");
	printf("press 1 for authorized and 2 for unauthorzed \n");
	scanf("%d", &user);
	if(confidence>=80){
		printf("face recognized\n");
		if(user==1){
			printf("access granted\n");
		}
		else{
			printf("access denied\n");
		}
	}
	else if(confidence>=50 && confidence<=79){
		printf("requires manual verification\n");
	}
	else if(confidence<50||user==2){
		printf("access denied\n");
	}
	return 0;
	}
	
	


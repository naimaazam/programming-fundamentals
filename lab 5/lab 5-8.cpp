#include <stdio.h>

int main(){
int permission;
printf("Enter permission value: ");
scanf("%d", &permission);
if (permission & 1){
        printf("View: Allowed\n");
    }
    else{
        printf("View: Not Allowed\n");
    }
if (permission & 2){
        printf("Train: Allowed\n");
    }
    else{
        printf("Train: Not Allowed\n");
    }
if (permission & 4){
        printf("Test: Allowed\n");
    }
    else{
        printf("Test: Not Allowed\n");
    }
 if (permission & 8){
        printf("Deploy: Allowed\n");
    }
    else{
        printf("Deploy: Not Allowed\n");
    }
if ((permission & 2) && (permission & 8)){
        printf("User has both Training and Deployment permissions.\n");
    }
    else{
        printf("User does not have both Training and Deployment permissions.\n");
    }
return 0;
}

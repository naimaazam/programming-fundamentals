#include <stdio.h>
#include <string.h>
int main(){
    char username[50];
    char password[50];
    char saveduser[50];
    char savedpass[50];
    FILE *fptr;
    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);
    fptr = fopen("credentials.txt", "r");
    if(fptr == NULL){
        printf("Credentials file not found!");
    }
    else{
        fscanf(fptr, "%s %s", saveduser, savedpass);
        if(strcmp(password, savedpass) == 0){
            printf("\nAccess Granted!");
        }
        else{
            printf("\nAccess Denied!");
        }
        fclose(fptr);
    }
return 0;
}

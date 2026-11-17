#include <stdio.h>
#include <string.h>
int main(){
    char email[100];
    char domain[50];
    char *ptr;
    printf("Enter your email address: ");
    scanf("%s", email);
    ptr = strchr(email, '@');
    if(ptr == NULL){
        printf("Invalid Email Format");
    }
    else{
        strcpy(domain, ptr + 1);
        printf("Email Domain: %s", domain);
    }
return 0;
}

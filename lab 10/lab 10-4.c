#include <stdio.h>
int main(){
    char name[50];
    int account;
    float amount;
    FILE *fptr;
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Account Number: ");
    scanf("%d", &account);
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);
    fptr = fopen("bank_log.txt", "a");
    if(fptr == NULL){
        printf("File could not be opened!");
    }
    else{
        fprintf(fptr, "Customer Name: %s\n", name);
        fprintf(fptr, "Account Number: %d\n", account);
        fprintf(fptr, "Withdrawal Amount: %.2f\n", amount);
        fprintf(fptr, "--------------------------\n");
        fclose(fptr);
        printf("\nTransaction saved successfully!");
    }
return 0;
}

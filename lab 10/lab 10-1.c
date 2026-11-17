#include <stdio.h>
#include <string.h>
int main(){
    char feedback[500];
    char updated[500] = "";
    char temp[100];
    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    printf("\nTotal characters: %d", strlen(feedback) - 1);
    if (strstr(feedback, "good") != NULL){
        printf("\nSentiment: Positive");
    }
    if (strstr(feedback, "bad") != NULL){
        printf("\nSentiment: Negative");
        strcpy(temp, feedback);
        strcpy(updated, "");
        char *ptr = strstr(temp, "bad");
        strncat(updated, temp, ptr - temp);
        strcat(updated, "not good");
        strcat(updated, ptr + 3);
        printf("\nUpdated review: %s", updated);
    }
    if (strstr(feedback, "good") == NULL && strstr(feedback, "bad") == NULL){
        printf("\nSentiment: Neutral");
    }
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int num;
    int i;
    int total_characters = 0;
    int longest = 0;
    int longest_index = 0;
    char **feedback;
    char *temp;
    printf("Enter number of feedback entries: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Invalid number!");
        return 0;
    }
    feedback = (char**)malloc(num * sizeof(char*));
    if(feedback == NULL){
        printf("Memory not allocated!");
        return 0;
    }
    for(i = 0; i < num; i++){
        feedback = (char**)realloc(feedback, (i + 1) * sizeof(char*));
        printf("\nEnter feedback %d: ", i + 1);
        feedback[i] = (char*)malloc(200 * sizeof(char));
        if(feedback[i] == NULL){
            printf("Memory not allocated!");
            return 0;
        }
        getchar();
        fgets(feedback[i], 200, stdin);
        feedback[i][strcspn(feedback[i], "\n")] = '\0';
    }
    for(i = 0; i < num; i++){
        total_characters = total_characters + strlen(feedback[i]);
}
    printf("\nTotal characters in all feedback = %d", total_characters);
    longest = strlen(feedback[0]);
    for(i = 0; i < num; i++){
        temp = feedback[i];
        int count = 0;
        while(*temp != '\0'){
            count++;
            temp++;
        }
        if(count > longest){
            longest = count;
            longest_index = i;
        }
    }
    for(i = 0; i < num; i++){
        printf("%d. %s\n", i + 1, feedback[i]);
    }
    printf("\nLongest feedback is: %s", feedback[longest_index]);
    printf("\nLength of longest feedback = %d", longest);
    for(i = 0; i < num; i++){
        free(feedback[i]);
    }
    free(feedback);
    return 0;
}


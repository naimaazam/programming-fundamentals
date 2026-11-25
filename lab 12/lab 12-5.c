#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, i, j, lenght, count;
    char *pattern, *temp;
    char **password;
    float similarity;
    float highest = 0;
    int highest_index = 0;
    printf("Enter number of participants: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Invalid number!");
        return 0;
    }
    pattern = (char*)malloc(100 * sizeof(char));
    if(pattern == NULL){
        printf("Memory not allocated!");
        return 0;
    }
    getchar();
    printf("Enter ideal password pattern: ");
    fgets(pattern, 100, stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    length = strlen(pattern);
    if(length == 0){
        printf("Pattern cannot be empty!");
        free(pattern);
        return 0;
    }
    password = (char**)malloc(n * sizeof(char*));
    if(password == NULL){
        printf("Memory not allocated!");
        free(pattern);
        return 0;
    }
    for(i = 0; i < n; i++){
        password[i] = (char*)malloc(100 * sizeof(char));
        if(password[i] == NULL){
            printf("Memory not allocated!");
            for(j = 0; j < i; j++){
                free(password[j]);
            }
            free(password);
            free(pattern);
            return 0;
        }
        printf("Enter password of participant %d: ", i + 1);
        fgets(password[i], 100, stdin);
        password[i][strcspn(password[i], "\n")] = '\0';
    }
    for(i = 0; i < n; i++){
        count = 0;
        temp = password[i];
        for(j = 0; j < length && temp[j] != '\0'; j++){
            if(pattern[j] >= 'A' && pattern[j] <= 'Z'){
                if(temp[j] >= 'A' && temp[j] <= 'Z'){
                    count++;
                }
            }
            else if(pattern[j] >= 'a' && pattern[j] <= 'z'){
                if(temp[j] >= 'a' && temp[j] <= 'z')
                {
                    count++;
                }
            }
            else if(pattern[j] >= '0' && pattern[j] <= '9'){
                if(temp[j] >= '0' && temp[j] <= '9'){
                    count++;
                }
            }
            else{
                if(!((temp[j] >= 'A' && temp[j] <= 'Z') ||
                     (temp[j] >= 'a' && temp[j] <= 'z') ||
                     (temp[j] >= '0' && temp[j] <= '9')))
                {
                    count++;
                }
            }
        }
        similarity = ((float)count / length) * 100;
        printf("\nPassword: %s", password[i]);
        printf("\nSimilarity: %.2f%%\n", similarity);
        if(i == 0 || similarity > highest){
            highest = similarity;
            highest_index = i;
        }
    }
    printf("\nPassword with highest similarity: %s",
           password[highest_index]);
    printf("\nHighest similarity: %.2f%%", highest);
    for(i = 0; i < n; i++){
        free(password[i]);
    }
    free(password);
    free(pattern);
    return 0;
}


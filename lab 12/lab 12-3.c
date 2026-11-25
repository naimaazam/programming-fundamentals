#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int containsDigit(char *str){
    while(*str != '\0'){
        if(isdigit(*str)){
            return 1;
        }
        str++;
    }
    return 0;
}
int main(){
    int n;
    int i;
    char **username;
    printf("Enter number of usernames: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Invalid number!");
        return 0;
    }
    username = (char**)malloc(n * sizeof(char*));
    if(username == NULL){
        printf("Memory not allocated!");
        return 0;
    }
    getchar();
    for(i = 0; i < n; i++){
        username[i] = (char*)malloc(100 * sizeof(char));
        if(username[i] == NULL){
            printf("Memory not allocated!");
            for(int j = 0; j < i; j++){
                free(username[j]);
            }
            free(username);
            return 0;
        }
        printf("Enter username %d: ", i + 1);
        fgets(username[i], 100, stdin);
        username[i][strcspn(username[i], "\n")] = '\0';
    }
    printf("\nValid usernames (without digits):\n");
    for(i = 0; i < n; i++){
        if(containsDigit(username[i]) == 0){
            printf("%s\n", username[i]);
        }
    }
    for(i = 0; i < n; i++){
        free(username[i]);
    }
    free(username);
    return 0;
}


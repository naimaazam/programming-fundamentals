#include <stdio.h>
int main(){
    char logs[9][30];
    int i, j;
    int count = 0;
	for (i = 0; i < 3; i++){
        printf("Enter log entry %d (username,status,timestamp): ", i + 1);
		scanf(" %29[^,],%29[^,],%29[^\n]",
              logs[i * 3], logs[i * 3 + 1], logs[i * 3 + 2]);
    }
	for (i = 0; i < 9; i++){
        for (j = 0; logs[i][j] != '\0'; j++){
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z'){
                count++;
            }
        }
    }
	printf("\nTotal uppercase letters = %d\n", count);
	return 0;
}


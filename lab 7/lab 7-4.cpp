#include <stdio.h>
int main(){
    char word_grid[3][100];
    char word[3][3][100];
    int i, j, k;
    int length, max_length = 0;
    int max_row = 0, max_col = 0;
	for (i = 0; i < 3; i++){
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }
	for (i = 0; i < 3; i++){
        j = 0;
        k = 0;
		for (int p = 0; ; p++){
            if (word_grid[i][p] != ' ' &&
                word_grid[i][p] != '\0'){
                word[i][j][k] = word_grid[i][p];
                k++;
            }
            else{
                if (k > 0){
                    word[i][j][k] = '\0';
					length = k;
					if (length > max_length){
                        max_length = length;
                        max_row = i;
                        max_col = j;
                    }
					j++;
                    k = 0;
                }
				if (word_grid[i][p] == '\0'){
                    break;
                }
            }
        }
    }
	printf("\nLongest word: %s\n", word[max_row][max_col]);
    printf("Length: %d\n", max_length);
    printf("Row Index (i): %d\n", max_row);
    printf("Column Index (j): %d\n", max_col);
return 0;
}


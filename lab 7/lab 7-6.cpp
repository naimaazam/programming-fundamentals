#include <stdio.h>
int main(){
    int shifts[4][3];
    int i, j;
    int index;
	printf("Enter production counts for 3 workstations:\n");
	for (i = 0; i < 3; i++){
        printf("\nWorkstation %d:\n", i);
		for (j = 0; j < 3; j++){
            printf("Enter production for shift %d: ", j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }
	printf("\nEnter row index for the new workstation (0 to 3): ");
    scanf("%d", &index);
	if (index < 0 || index > 3){
        printf("Invalid row index!\n");
        return 0;
    }
	for (i = 3; i > index; i--){
        for (j = 0; j < 3; j++){
            shifts[i][j] = shifts[i - 1][j];
        }
    }
	printf("\nEnter production counts for the new workstation:\n");
	for (j = 0; j < 3; j++){
        printf("Enter production for shift %d: ", j + 1);
        scanf("%d", &shifts[index][j]);
    }
	for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("%5d", shifts[i][j]);
        }
		printf("\n");
    }
return 0;
}


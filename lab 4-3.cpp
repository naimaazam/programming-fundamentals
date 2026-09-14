#include <stdio.h>

int main() {
    int record, missing, duplicate;
    float missPerc;

    printf("Enter total records: ");
    scanf("%d", &record);

    printf("Enter number of missing records: ");
    scanf("%d", &missing);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicate);

    if (record <= 0) {
        printf("Invalid Dataset");
    }
    else {
        missPerc = (missing * 100.0) / record;

        printf("Missing Data Percentage: %.2f%%\n", missPerc);

        if (missPerc > 30) {
            printf("Poor Quality Dataset");
        }
        else if ((duplicate * 100.0) / record > 20) {
            printf("Dataset Requires Cleaning");
        }
        else {
            printf("Dataset Ready for Training");
        }
    }
    return 0;
}





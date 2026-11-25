#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    int *ratings;
    int i;
    int total = 0;
    int highest;
    int highest_index = 0;
    float average;
    int update_index;
    int new_rating;
    printf("Enter number of movie categories: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Invalid number of categories!");
        return 0;
    }
    ratings = (int*)malloc(num * sizeof(int));
    if(ratings == NULL){
        printf("Memory not allocated!");
        return 0;
    }
    for(i = 0; i < num; i++){
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }
    for(i = 0; i < num; i++){
        total = total + ratings[i];
    }
    printf("\nTotal ratings = %d", total);
    average = (float)total / num;
    printf("\nAverage ratings per category = %.2f", average);
    highest = ratings[0];
    for(i = 0; i < num; i++){
        if(ratings[i] > highest){
            highest = ratings[i];
            highest_index = i;
        }
    }
    printf("\nHighest rating count = %d", highest);
    printf("\nCategory index with highest ratings = %d", highest_index);
    printf("\n\nEnter category index to update: ");
    scanf("%d", &update_index);
    if(update_index >= 0 && update_index < num){
        printf("Enter new rating count: ");
        scanf("%d", &new_rating);
        ratings[update_index] = new_rating;
        printf("\nRating count updated successfully!");
        for(i = 0; i < num; i++){
            printf("Category %d = %d\n", i, ratings[i]);
        }
        total = 0;
        for(i = 0; i < num; i++){
            total = total + ratings[i];
        }
        average = (float)total / num;
        highest = ratings[0];
        highest_index = 0;
        for(i = 0; i < num; i++){
            if(ratings[i] > highest){
                highest = ratings[i];
                highest_index = i;
            }
        }
    }
    else{
        printf("Invalid category index!");
    }
    free(ratings);
    return 0;
}


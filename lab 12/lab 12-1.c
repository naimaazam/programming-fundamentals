#include <stdio.h>
#include <stdlib.h>
int main(){
    int num_categories;
    int *stock;
    int i;
    int total = 0;
    int lowest;
    int lowest_index = 0;
    float average;
    int update_category;
    int new_stock;
    printf("Enter number of book categories: ");
    scanf("%d", &num_categories);
    if(num_categories <= 0){
        printf("Invalid number of categories!");
        return 0;
    }
    stock = (int*)malloc(num_categories * sizeof(int));
    if(stock == NULL){
        printf("Memory not allocated!");
        return 0;
    }
    for(i = 0; i < num_categories; i++){
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }
    for(i = 0; i < num_categories; i++){
        total = total + stock[i];
    }
    printf("\nTotal stock = %d", total);
    average = (float)total / num_categories;
    printf("\nAverage stock = %.2f", average);
    lowest = stock[0];
    for(i = 0; i < num_categories; i++){
        if(stock[i] < lowest){
            lowest = stock[i];
            lowest_index = i;
        }
    }
    printf("\nCategory index with lowest stock = %d", lowest_index);
    printf("\nLowest stock quantity = %d", lowest);
    printf("\n\nEnter category index to update: ");
    scanf("%d", &update_category);
    if(update_category >= 0 && update_category < num_categories){
        printf("Enter new stock quantity: ");
        scanf("%d", &new_stock);
        stock[update_category] = new_stock;
        printf("\nUpdated stock quantities:\n");
        for(i = 0; i < num_categories; i++){
            printf("Category %d = %d\n", i, stock[i]);
        }
    }
    else{
        printf("Invalid category index!");
    }
    free(stock);
    return 0;
}


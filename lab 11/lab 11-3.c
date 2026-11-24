#include <stdio.h>
struct Item{
    int ID;
    char name[50];
    int quantity;
    float unitPrice;
};
int main(){
    struct Item items[5];
    int i;
    int searchID;
    int found = 0;
    float total = 0;
    for (i = 0; i < 5; i++){
        printf("\nEnter details of Item %d\n", i + 1);
        printf("Enter Item ID: ");
        scanf("%d", &items[i].ID);
        printf("Enter Item Name: ");
        scanf("%s", items[i].name);
        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter Unit Price: ");
        scanf("%f", &items[i].unitPrice);
    }
    for (i = 0; i < 5; i++){
        total = total + (items[i].quantity * items[i].unitPrice);
    }
    printf("\nTotal Inventory Value = %.2f\n", total);
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);
    for (i = 0; i < 5; i++){
        if (items[i].ID == searchID){
            found = 1;
            printf("\nItem Found!\n");
            printf("Item ID: %d\n", items[i].ID);
            printf("Item Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            printf("Total Value of Item: %.2f\n",
                   items[i].quantity * items[i].unitPrice);
            break;
        }
    }
    if (found == 0){
        printf("\nItem Not Found!\n");
    }
    return 0;
}

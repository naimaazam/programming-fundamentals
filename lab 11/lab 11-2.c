#include <stdio.h>
struct Product{
    int ID;
    char name[50];
    char category[30];
    float price;
    int stock;
};
void displayProductDetails(struct Product p){
    float discount;
    float finalPrice;
    discount = p.price * 5 / 100;
    finalPrice = p.price - discount;
    printf("Product ID: %d\n", p.ID);
    printf("Product Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Available Stock: %d\n", p.stock);
    printf("Discount: 5%%\n");
    printf("Final Price: %.2f\n", finalPrice);
}
int main(){
    struct Product p1 = {101, "Laptop", "Electronics", 100000, 10};
    displayProductDetails(p1);
    return 0;
}

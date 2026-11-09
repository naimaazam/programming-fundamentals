#include <stdio.h>
float calculateDiscount(float amount, char membership){
    float rate;
    if (membership == 'P')
        rate = 20;
    else if (membership == 'G')
        rate = 10;
    else if (membership == 'S')
        rate = 5;
    else
        rate = 0;
    if (amount > 10000)
        rate = rate + 2;
    return amount * rate / 100;
}
float calculateFinalBill(float discountedAmount){
    float tax, shipping, total;
    tax = discountedAmount * 15 / 100;
    if (discountedAmount <= 5000)
        shipping = 300;
    else
        shipping = 0;
    total = discountedAmount + tax + shipping;
    return total;
}
int main(){
    float amount, discount, discountedAmount, finalBill;
    char membership;
    printf("Enter shopping amount: ");
    scanf("%f", &amount);
    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &membership);
    discount = calculateDiscount(amount, membership);
    discountedAmount = amount - discount;
    finalBill = calculateFinalBill(discountedAmount);
    printf("\nOriginal Shopping Amount: PKR %.2f", amount);
    printf("\nDiscount Amount: PKR %.2f", discount);
    printf("\nDiscounted Amount: PKR %.2f", discountedAmount);
    printf("\nFinal Payable Bill: PKR %.2f", finalBill);
return 0;
}

#include<stdio.h>
int main(){
	float data, price,discount;
	float basiccost, finalprice;
	printf("how much data is used in GB\n");
	scanf("%d",&data);
	printf("what is the price per GB\n");
	scanf("%d",&price);
	basiccost=price*data;
	if(data<50){
		printf("no discount is applied\n");
		}
    else if (data >= 50 && data <= 99) {
        discount = 5;
    }
    else if (data >= 100 && data <= 199) {
        discount = 10;
    }
    else {
        discount = 10;
    }
	finalprice = basiccost - (basiccost * discount / 100);
    printf("Basic Cost = %.2f\n", basiccost);
    printf("Discount = %.2f%%\n", discount);
    printf("Final Cost = %.2f\n", finalprice);

    return 0;
	
}

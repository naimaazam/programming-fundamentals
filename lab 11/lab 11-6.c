#include <stdio.h>
#include <string.h>
#define TOLL_RATE 50
void processVehicle(char vehicleType[]){
    static int totalVehicles = 0;
    static int totalRevenue = 0;
    totalVehicles++;
    totalRevenue = totalRevenue + TOLL_RATE;
    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Toll Fee: %d PKR\n", TOLL_RATE);
    printf("Vehicles Processed: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalRevenue);
}
int main(){
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");
    processVehicle("Car");
    processVehicle("Bus");
    return 0;
}

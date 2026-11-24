#include <stdio.h>
int calculateChecksum(int transactionID){
    int sum = 0;
    if (transactionID < 10){
        return transactionID;
    }
    while (transactionID > 0){
        sum = sum + (transactionID % 10);
        transactionID = transactionID / 10;
    }
    return calculateChecksum(sum);
}
int main(){
    int transactionID;
    int answer;
    printf("Enter Transaction ID: ");
    scanf("%d", &transactionID);
    answer = calculateChecksum(transactionID);
    printf("Digital Root (Checksum) = %d", answer);
    return 0;
}

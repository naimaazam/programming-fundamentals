#include <stdio.h>
int main(){
float confidence, threshold;
printf("Enter model confidence: ");
scanf("%f", &confidence);
printf("Enter required confidence threshold: ");
scanf("%f", &threshold);
if (confidence >= 90){
        printf("Very High Confidence\n");
    }
    else if (confidence >= 75){
        printf("High Confidence\n");
    }
    else if (confidence >= 50){
        printf("Moderate Confidence\n");
    }
    else{
        printf("Low Confidence\n");
    }
if (confidence >= threshold && confidence >= 50){
        printf("Prediction Accepted\n");
    }
    else{
        printf("Prediction Rejected\n");
    }
    return 0;
}

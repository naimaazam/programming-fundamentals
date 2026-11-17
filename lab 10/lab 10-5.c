#include <stdio.h>
int main(){
    FILE *fptr;
    int rollno;
    char name[50];
    float marks;
    fptr = fopen("marks.txt", "r");
    if(fptr == NULL){
        printf("Error: File Not Found!");
    }
    else{
        printf("\n Student Marks Report\n");
        printf("%-15s %-20s %-10s\n", "Roll No", "Name", "Marks");
        while(fscanf(fptr, "%d %s %f", &rollno, name, &marks) != EOF){
            printf("%-15d %-20s %-10.2f\n", rollno, name, marks);
        }
        fclose(fptr);
    }
return 0;
}

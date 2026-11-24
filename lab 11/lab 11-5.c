#include <stdio.h>
struct HospitalRecord{
    struct PatientInfo{
        int patientID;
        char name[50];
        int age;
    } patient;  
    int roomNo;
    char disease[50];
    int days;
};
int main(){
    struct HospitalRecord record1 = {
        {101, "Ali", 25},
        12,
        "Malaria",
        4
    };
    struct HospitalRecord *ptr;
    ptr = &record1;
    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);
    printf("Room Number: %d\n", ptr->roomNo);
    printf("Disease: %s\n", ptr->disease);
    printf("Hospital Days: %d\n", ptr->days);
    return 0;
}

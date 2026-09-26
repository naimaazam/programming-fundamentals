#include <stdio.h>

int main() {
    int role, status, security;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter security level: ");
    scanf("%d", &security);

    if (status == 0) {
        printf("Access Denied");
    }
    else {
        switch (role) {

            case 1:
                if (security >= 3) {
                    printf("Admin Access Granted");
                }
                else {
                    printf("Access Denied");
                }
                break;

            case 2:
                if (security >= 2) {
                    printf("Researcher Access Granted");
                }
                else {
                    printf("Access Denied");
                }
                break;

            case 3:
                if (security >= 1) {
                    printf("Student Access Granted");
                }
                else {
                    printf("Access Denied");
                }
                break;

            default:
                printf("Access Denied");
        }
    }

    return 0;
}

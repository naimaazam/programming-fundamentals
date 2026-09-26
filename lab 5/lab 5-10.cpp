#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize;
    int role, status, permission;

    // Taking input
    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter confidence score: ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter user role: ");
    scanf("%d", &role);

    printf("\nModel Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter model status: ");
    scanf("%d", &status);

    printf("\nPermissions:\n");
    printf("1 = View\n");
    printf("2 = Train\n");
    printf("4 = Test\n");
    printf("8 = Deploy\n");
    printf("Enter permission value: ");
    scanf("%d", &permission);


    // Calculate model score
    modelScore = (accuracy + confidence) / 2.0;

    printf("\n===== MODEL INFORMATION =====\n");

    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);
    printf("Model Score: %.2f\n", modelScore);


    // Nested switch for role
    printf("User Role: ");

    switch(role)
    {
        case 1:
            printf("Admin\n");
            break;

        case 2:
            printf("Developer\n");
            break;

        case 3:
            printf("Researcher\n");
            break;

        default:
            printf("Invalid Role\n");
    }


    // Nested switch for model status
    printf("Model Status: ");

    switch(status)
    {
        case 1:
            printf("Ready\n");
            break;

        case 2:
            printf("Testing\n");
            break;

        case 3:
            printf("Training\n");
            break;

        default:
            printf("Invalid Status\n");
    }


    // Bitwise check for deployment permission
    if(permission & 8)
    {
        printf("Deployment Permission: Yes\n");
    }
    else
    {
        printf("Deployment Permission: No\n");
    }


    // Ternary operator
    printf("Model Score Status: %s\n",
           modelScore >= 75 ? "Good" : "Needs Improvement");


    // sizeof()
    printf("Size of accuracy variable: %zu bytes\n", sizeof(accuracy));


    // math.h
    printf("Rounded Model Score: %.0f\n", round(modelScore));


    // Deployment decision
    if(accuracy >= 80)
    {
        if(confidence >= 75)
        {
            if(datasetSize >= 1000)
            {
                if(status == 1)
                {
                    if(permission & 8)
                    {
                        printf("\nDEPLOYMENT READY\n");
                    }
                    else
                    {
                        printf("\nNOT READY: No deployment permission.\n");
                    }
                }
                else
                {
                    printf("\nNOT READY: Model is not ready.\n");
                }
            }
            else
            {
                printf("\nNOT READY: Dataset size is too small.\n");
            }
        }
        else
        {
            printf("\nNOT READY: Confidence is too low.\n");
        }
    }
    else
    {
        printf("\nNOT READY: Accuracy is too low.\n");
    }

    return 0;
}

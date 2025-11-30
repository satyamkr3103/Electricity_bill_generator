#include <stdio.h>

float calculateResidential(float units){
    float bill = 0.0;
    if(units <=100){
        bill = units * 2.0;
    }
    else if(units <=300){
        bill = (100 * 2.0) + (units -100) * 3.50;
    }
    else{
        bill = (100 * 2.0) + (200 * 3.50) + (units -300) * 5.00;
    }
    return bill;
}

float calculateCommercial(float units){
    float bill = 0.0;
    if(units <=200){
        bill = units * 5.0;
    }
    else if(units <=300){
        bill = (200 * 5.0) + (units -200) * 7.50;
    }
    else{
        bill = (200 * 5.0) + (300 * 7.50) + (units -500) * 10.0;
    }
    return bill;
}

float calculateIndustrial(float units){
    float bill = 0.0;
    if(units <=500){
        bill = units * 8.0;
    }
    else{
        bill = (500 * 8.0) + (units -500) * 12.0;
    }
    return bill;
}
int main(){
    char customerName[50];
    float units;int choice;
    float totalBill;

    printf("==== ELECTRICITY BILL GENERATION SYSTEM ====\n");

    printf("Enter Customer Name: ");
    scanf("%[^\n]", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    printf("Select Customer Type:\n");
    printf("1. Residential\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            totalBill = calculateResidential(units);
            break;
        case 2:
            totalBill = calculateCommercial(units);
            break;
        case 3:
            totalBill = calculateIndustrial(units);
            break;
        default:
            printf("Invalid choice! Program exiting.\n");
            return 1;
    }
    printf("\n==== ELECTRICITY BILL ====\n");
    printf("Customer Name : %s\n", customerName);
    printf("Units Consumed: %.2f\n", units);
    printf("Customer Type :");
    if (choice == 1) printf(" Residential\n");
    else if (choice == 2) printf(" Commercial\n");
    else if (choice == 3) printf(" Industrial\n");
    printf("Total Bill    : %.2f\n", totalBill);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 4.7
    DATE: 1/11/2022
    STUDENT ID: 2022005
    */

    // Variable declarations
    int incomeAmount;           // Total income amount
    int numberOfProperties;    // Number of properties owned
    int taxExemptIncome;       // Tax-exempt income
    int taxableIncome;         // Income after tax exemption
    double taxAmount;          // The corresponding tax amount
    
    // Constant declaration
    double taxRate = 0.30;    // Tax rate of 30%
    
    // Input
    printf("Enter the income amount: ");
    scanf("%d", &incomeAmount);
    printf("Enter the number of properties: ");
    scanf("%d", &numberOfProperties);
    
    // Calculate tax-exempt income
    switch (numberOfProperties) {
        case 0: taxExemptIncome = 12000; break;
        case 1: taxExemptIncome = 10000; break;
        case 2: taxExemptIncome = 8000; break;
        case 3: taxExemptIncome = 5000; break;
        default: taxExemptIncome = 0; break;
    }
    
    taxableIncome = incomeAmount - taxExemptIncome;
    taxAmount = (double)taxableIncome * taxRate;
    
    // Output results
    printf("Tax-exempt income is: %d\n", taxExemptIncome);
    printf("Taxable income is: %d\n", taxableIncome);
    printf("The corresponding tax is: %.2f\n", taxAmount);
    
    // Pause the system to wait for user input
    system("pause");
}


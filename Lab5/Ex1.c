#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 5.1
    DATE: 8/11/2022
    STUDENT ID: 2022005
    */
    
    // Variable declaration & initialization
    int number = 0, exponent = 1;  // The number and its exponent
    float result = 0;             // Result of the power calculation
    
    // Input data
    printf("Enter a number between 2 and 10: ");
    scanf("%d", &number);

    // Prompt the user until a valid number between 2 and 10 is entered
    while (number < 2 || number > 10) {
        printf("Invalid input. Enter a number between 2 and 10: ");
        scanf("%d", &number);        
    }

    // Calculations and displaying results (for exponent 2 <= i <= 10 until result >= 100)
    while (result < 100) {
        result = pow(number, exponent);
        printf("Power = %d^%d = %.2f\n", number, exponent, result);
        exponent++;
    }

    // Wait for user input before exiting
    system("pause");
}


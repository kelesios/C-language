#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 5.2
    DATE: 8/11/2022
    STUDENT ID: 2022005
    */
    
    // Declaration & initialization of variables
    int number = 0, exponent = 1; // The base number and its current exponent
    float power = 1;             // Result of raising the number to the power
    
    // Input data
    // Prompt the user until they provide a number between 2 and 10
    do {
        printf("Enter a number between 2 and 10: ");
        scanf("%d", &number);        
    } while (number < 2 || number > 10);

    // Calculations and displaying results (for 2 <= exponent <= 10)
    do {
        // Calculate power manually without using pow()
        power = power * number;

        // Display results
        printf("Power = %d^%d = %.2f\n", number, exponent, power);

        exponent++;
    } while (power < 100);

    // Wait for user input before exiting
    system("pause");
}


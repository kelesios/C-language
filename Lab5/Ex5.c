#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 5.5
    DATE: 8/11/2022
    STUDENT ID: 2022005
    */
    // Declaration & initialization of variables 
    int a, b, product = 0;

    // Input data
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    // Calculations and result display
    printf("a * b = %d\n", a * b); // Display direct multiplication result
    while (b > 0) {
        if (b % 2 != 0) // Check if b is odd
            product = product + a; // Add 'a' to the product when b is odd
        printf("a = %d, b = %d, product = %d\n", a, b, product); // Intermediate results
        a = a * 2; // Double 'a'
        b = b / 2; // Halve 'b'
    } 

    printf("Final product = %d\n", product); // Display final computed product
    // Wait for user input before exiting
    system("pause");
}


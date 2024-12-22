#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 5.4
    DATE: 8/11/2022
    STUDENT ID: 2022005
    */
    // Declaration & initialization of variables 
    int number = 0, negative_count = 0, positive_count = 0, in_range_100_200 = 0;

    // Input data & calculations and display results
    do {
        printf("Enter a number NOT between 15 and 25: ");
        scanf("%d", &number);

        if (number < 15 || number > 25) {  // Check if the number is outside the range [15, 25]
            if (number < 0) 
                negative_count++; // Count negative numbers
            else 
                positive_count++; // Count positive numbers

            if (number >= 100 && number <= 200) 
                in_range_100_200++; // Count numbers in the range [100, 200]

            if (number % 2 == 0)  // Check if the number is even
                printf("The number is even: %d^2 = %.0f\n", number, pow(number, 2));
                // printf("The number is even: %d^2 = %d\n", number, number * number); // Alternative without pow()
        }
    } while (number < 15 || number > 25); // Repeat until a number in the range [15, 25] is entered

    // Display final results
    printf("Negative numbers: %d\n", negative_count);
    printf("Positive numbers: %d\n", positive_count);
    printf("Numbers between 100 & 200: %d\n", in_range_100_200);

    // Wait for user input before exiting
    system("pause");
}


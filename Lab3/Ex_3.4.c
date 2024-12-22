#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 3.4
    DATE: 25/10/2022
    STUDENT ID: 2022005
    */
    
    // Declaration of variables
    int grade_a, grade_b, grade_c, difference;
    double average;
    // Input of data
    printf("Enter grades a & b: ");
    scanf("%d %d", &grade_a, &grade_b);
    // Check if the difference is negative to reverse the subtraction
    if (grade_a > grade_b) {
        difference = grade_a - grade_b;
    }
    else {
        difference = grade_b - grade_a;
    }
    if (difference > 20) { // If the difference is greater than 20 points, ask for a 3rd grade...
        printf("Difference greater than 20 points (%d). Enter grade c: ", difference);
        scanf("%d", &grade_c);
        average = (double)(grade_a + grade_b + grade_c) / 3; // ...and calculate the average of the 3 grades
    }
    else { // ...otherwise, calculate the average of the 2 grades
        average = (double)(grade_a + grade_b) / 2; // Calculation of average from the 2 grades
    }
    // Display results
    printf("The average grade is: %.2f\n", average);
    // Wait for key press before exiting
    system("pause"); 
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 3.3
    DATE: 25/10/2022
    STUDENT ID: 2022005
    */
    
    // Declaration of variables
    int age, weight, height;
    double bmi, height_in_meters;
    // Input of data
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight: ");
    scanf("%d", &weight);
    printf("Enter height (in cm): ");
    scanf("%d", &height);
    // Calculations & display of results
    if (age > 18) {
        height_in_meters = (double)height / 100;
        bmi = weight / pow(height_in_meters, 2);
        printf("The Body Mass Index (BMI) is = %lf\n", bmi);
        if (bmi < 18.5) {
            printf("Underweight person.\n");
        }
        else {
            if (bmi >= 18.5 && bmi < 25) {
//            if (bmi < 25 && bmi >= 18.5) { // Alternative 1 optimized
//            if (bmi < 25) { // Alternative 1
                printf("Normal weight person.\n");
            }
            else {
                if (bmi >= 25 && bmi < 30) {
//                if (bmi < 30 && bmi >= 25) { // Alternative 2 optimized
//                if (bmi < 30) { // Alternative 2
                    printf("Overweight person.\n");
                }
                else {
                    printf("Obese person.\n");
                }
            }
        }
    }
    else {
        printf("Body Mass Index calculation is not possible.\n");
    }
    // Wait for key press before exiting
    system("pause"); 
}


#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 3.7
    DATE: 25/10/2022
    STUDENT ID: 2022005
    */

    // Declaration of variables
    int driver_age, vehicle_type, engine_capacity, annual_insurance_cost;
    // Input of data
    printf("Enter the driver's age: ");
    scanf("%d", &driver_age);
    printf("Enter the vehicle type (0 = motorcycle, 1 = car): ");
    scanf("%d", &vehicle_type);
    printf("Enter the engine capacity of the vehicle: ");
    scanf("%d", &engine_capacity);
    // Calculation of base insurance cost
    if (vehicle_type == 0) { // It is a motorcycle
        if (engine_capacity <= 125) {
            annual_insurance_cost = 100;
        }
        else {
            annual_insurance_cost = 140;
        }
    }
    else {
        if (vehicle_type == 1) { // It is a car
            if (engine_capacity <= 1400) {
                annual_insurance_cost = 400;
            }
            else {
                if (engine_capacity <= 1800) {
                    annual_insurance_cost = 500;
                }
                else {
                    annual_insurance_cost = 700;
                }
            }
        }
        else {
            annual_insurance_cost = -1; // Invalid input
        }
    }
    // Adjusting insurance cost based on driver's age
    if (driver_age <= 24) { // No check if the driver's age is below 18
        annual_insurance_cost = annual_insurance_cost + (annual_insurance_cost * 0.10);
    }
    // Display results
    // If the user entered an invalid vehicle type, display an error message
    if (annual_insurance_cost != -1) {
        printf("The annual insurance cost for the vehicle is: %d\n", annual_insurance_cost);
    }
    else {
        printf("You did not enter the correct vehicle type (valid values: 0/1).\n");
    }
    // Wait for key press before exiting
    system("pause");
}


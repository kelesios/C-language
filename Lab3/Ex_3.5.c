#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 3.5
    DATE: 25/10/2022
    STUDENT ID: 2022005
    */

    // Declaration of variables
    int salary, unicef_contribution, sos_contribution, final_salary;
    // Input of data
    printf("Enter the employee's salary: ");
    scanf("%d", &salary);
    // Calculations
    if (salary <= 800) {
        unicef_contribution = salary * 0.04;
        sos_contribution = salary * 0.05;
    }
    else {
        if (salary <= 1200) {
            unicef_contribution = salary * 0.06;
            sos_contribution = salary * 0.075;
        }
        else {
            if (salary <= 2000) {
                unicef_contribution = salary * 0.08;
                sos_contribution = salary * 0.095;
            }
            else {
                unicef_contribution = salary * 0.11;
                sos_contribution = salary * 0.12;
            }
        }
    }
    final_salary = salary - unicef_contribution - sos_contribution;
    // Display results
    printf("UNICEF Contribution: %d\nSOS Contribution: %d\nFinal Salary: %d\n", unicef_contribution, sos_contribution, final_salary);
    // Wait for key press before exiting
    system("pause");
}


#include <stdio.h>

main() {
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 4.3
    DATE: 1/11/2022
    STUDENT ID: 2022005
    */

    // Variable declaration
    char operation[1];
    int a, b;
    double result;
    
    // Input
    printf("Enter an operation symbol (+, -, *, /): ");
    scanf("%c", &operation); // Take input for the operation symbol
    printf("Enter two integers (a & b): ");
    scanf("%d %d", &a, &b); // Take input for two integers
    
    // Calculation and output of the result
    switch (operation[0]) {
        case '+' :  result = a + b;
                    printf("The result of %d %c %d is: %.0f\n", a, operation[0], b, result);
                    break;
        case '-' :  result = a - b;
                    printf("The result of %d %c %d is: %.0f\n", a, operation[0], b, result);
                    break;
        case '*' :  result = a * b;
                    printf("The result of %d %c %d is: %.0f\n", a, operation[0], b, result);
                    break;
        case '/' :  if (b != 0)
                        result = (double)a / b;
                        printf("The result of %d %c %d is: %.2f\n", a, operation[0], b, result);
                    else
                        printf("Division by zero is not allowed.\n");
                    break;
        default :   printf("Invalid operation.\n");
    }
    
    // Wait for user input to exit
    system("Pause");
}


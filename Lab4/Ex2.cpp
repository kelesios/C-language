#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 4.2
    DATE: 1/11/2022
    STUDENT ID: 2022005
    */

    int x;
    printf("Enter a positive integer for x: ");
    scanf("%d", &x);
    
    switch (x) {
        case 0 :    printf("x = 0\n");
                    break;
        case 1 :    
        case 3 :    
        case 5 :    printf("x = odd\n");
                    break;
        case 2 :    
        case 4 :    printf("x = even\n");
                    break;
        default :   printf("x > 5\n");
    }
    /* Alternative version
    switch (x) {
        case 0 :    printf("x = 0\n");
                    break;
        case 1 :    printf("x = odd\n");
                    break;
        case 2 :    printf("x = even\n");
                    break;
        case 3 :    printf("x = odd\n");
                    break;
        case 4 :    printf("x = even\n");
                    break;
        case 5 :    printf("x = odd\n");
                    break;
        default :   printf("x > 5\n");
    }
    */
    system("Pause");
}


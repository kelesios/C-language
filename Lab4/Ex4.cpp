#include <stdio.h>
#include <stdlib.h>

main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 2:
        case 12:
            printf("The season is Winter.\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("The season is Spring.\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("The season is Summer.\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("The season is Fall.\n");
            break;
        default:
            printf("Invalid month entered.\n");
    }
    
    system("Pause");
}


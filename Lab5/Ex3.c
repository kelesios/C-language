#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 5.3
    DATE: 8/11/2022
    STUDENT ID: 2022005
    */
    
    // Declaration & initialization of variables
    int rooms = 0, candidates = 0;        // Total rooms and candidates
    int capacity = 0, invigilators = 0, total_invigilators = 0; // Room capacity, invigilators per room, and total invigilators

    // Declaration of constants
    const int max_candidates = 100;      // Maximum number of candidates
    
    // Input and calculation of data
    do {
        printf("Enter the capacity of the room: ");
        scanf("%d", &capacity);

        rooms++; // Increment the room count

        // Determine the number of invigilators needed based on room capacity
        if (capacity <= 15)
            invigilators = 1;
        else if (capacity <= 23)
            invigilators = 2;
        else
            invigilators = 3;

        printf("This room will need %d invigilator(s).\n", invigilators);

        // Update totals
        total_invigilators += invigilators;
        candidates += capacity;

    } while (candidates < max_candidates);

    // Display results
    printf("Total number of rooms: %d\n", rooms);
    printf("Total number of invigilators: %d\n", total_invigilators);
    printf("Total number of seats: %d\n", candidates);

    // Wait for user input before exiting
    system("pause");
}


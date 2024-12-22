#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    SUBJECT: STRUCTURED PROGRAMMING
    SECTION: T1
    LAB EXERCISE: 3.8
    DATE: 25/10/2022
    STUDENT ID: 2022005
    */

    // Declaration of variables
    int kilowatt_hours, tmp_kilowatt_hours, consumption_cost;
    double total_amount_payable;
    // Declaration of constants
    int fixed_charge = 15;
    int tier1_limit = 200;
    double tier1_rate = 0.20;
    int tier2_limit = 1000;
    double tier2_rate = 0.35;
    double tier3_rate = 0.50;
    // Input data
    printf("Enter the kilowatt hours: ");
    scanf("%d", &kilowatt_hours);
    // Calculations
    if (kilowatt_hours <= tier1_limit) { // Consumption less than or equal to 200 kWh
        total_amount_payable = kilowatt_hours * tier1_rate;
    }
    else {
        if (kilowatt_hours <= tier2_limit) { // Consumption less than or equal to 1000 kWh
            tmp_kilowatt_hours = kilowatt_hours - tier1_limit;
            total_amount_payable = (tier1_limit * tier1_rate) + (tmp_kilowatt_hours * tier2_rate);
        }
        else { // Consumption greater than 1000 kWh
            total_amount_payable = (tier1_limit * tier1_rate) + ((tier2_limit - tier1_limit) * tier2_rate);
            tmp_kilowatt_hours = kilowatt_hours - tier2_limit;
            total_amount_payable = total_amount_payable + (tmp_kilowatt_hours * tier3_rate);
        }
    }
    total_amount_payable = total_amount_payable + fixed_charge;
    // Display results
    printf("The total amount payable is: %.2f euros\n", total_amount_payable);
    // Wait for key press before exiting
    system("pause");
}


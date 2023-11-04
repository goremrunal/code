	
#include <stdio.h>
    int main() 
    {
    int year, years_of_service;
    double salary; // Declare the salary variable
    double Bonus;  // Declare the Bonus variable
    
    printf("Enter the number of years: ");
    scanf("%d", &year);
    
    printf("Enter the salary: ");
    scanf("%lf", &salary); // Use %lf for double
    
    if (year > 5) {
        Bonus = salary * 10.0 / 100.0; // Calculate the bonus as 10% of the salary
        printf("Bonus: %.2lf\n", Bonus); // Print the bonus with 2 decimal places
    } else {
        printf("No bonus\n");
    }

    return 0;
}


#include <stdio.h>
int main() {
    int a, b, c;
    double semiperimeter;  // Use double for semiperimeter to handle decimal values
    
    // Prompt the user to enter the values of a, b, and c
    printf("Enter the values of a, b, and c: ");
    
    // Read the values of a, b, and c from user input
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculate the semiperimeter
    semiperimeter = (a + b + c) / 2.0; // Use 2.0 to ensure a floating-point division
    
    // Display the semiperimeter
    printf("Semiperimeter: %lf\n", semiperimeter);
    
    return 0;
}


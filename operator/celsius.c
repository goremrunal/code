
#include<stdio.h>
int main()
{
    int celsius;
    printf("Enter temperature in Celsius: "); // Prompt the user to enter Celsius temperature
    scanf("%d", &celsius);

    int fahrenheit = (celsius * 9/5) + 32; // Correct the formula for Fahrenheit conversion

    printf("Temperature in Fahrenheit: %d\n", fahrenheit); // Print the result
    return 0;
}


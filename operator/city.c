
#include <stdio.h>
#include <string.h>
int main()
{
    char city[100];
    scanf("%s", city); // Remove the & before city
    
    // Use strcmp() to compare strings
    if (strcmp(city, "Delhi") == 0)
    {
        printf("Red fort");
    }
    else if (strcmp(city, "Agra") == 0)
    {
        printf("Tajmahal");
    }
    else if (strcmp(city, "Jaipur") == 0)
    {
        printf("Jalmahal");
    }
    else
    {
        printf("Monument");
    }
    
    return 0;
}

	


#include <stdio.h>

int main() 
{
    int cp, sp, amt;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp) 
    {
        amt = sp - cp;
        printf("Profit: %d\n", amt);
    } else if (sp < cp) 
    {
        amt = cp - sp;
        printf("Loss: %d\n", amt);
    } else
     {
        printf("No profit, no loss\n");
    }

    return 0;
}
 
	

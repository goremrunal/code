
#include <stdio.h>
int main() 
{
    int cp, t;
    float Rt;

    printf("Enter the purchase amount (cp): ");
    scanf("%d", &cp);

    if (cp > 100000) {
        t = 15;
        Rt = cp * 15 / 100.0;
    } else if (cp >= 50000) {
        t = 10;
        Rt = cp * 10 / 100.0;
    } else {
        t = 5;
        Rt = cp * 5 / 100.0;
    }

    printf("Discount Rate (t): %d%%\n", t);
    printf("Discount Amount (Rt): %.2f\n", Rt);

    return 0;
}


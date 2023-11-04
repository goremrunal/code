#include <stdio.h>
int main() 
{
    int A, B, C, D;
    int min, smin, max, smax;

    // Input four numbers
    scanf("%d%d%d%d", &A, &B, &C, &D);

    // Find the minimum and second minimum
    if (A < B) {
        min = A;
        smin = B;
    } else {
        min = B;
        smin = A;
    }

    // Find the maximum and second maximum
    if (C > D) {
        max = C;
        smax = D;
    } else {
        max = D;
        smax = C;
    }

    // Compare the minimum and second minimum with the maximum and second maximum
    if (min > smax) {
        // If min is greater than smax, then smax is the third maximum
        printf("Third maximum: %d\n", smax);
    } else if (smin > smax) {
        // If smin is greater than smax, then smin is the third maximum
        printf("Third maximum: %d\n", smin);
    } else {
        // Otherwise, max is the third maximum
        printf("Third maximum: %d\n", max);
    }

    return 0;
}


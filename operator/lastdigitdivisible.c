#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); 
    int lastdigit= n % 10;
    if(lastdigit % 3 == 0)
    {
        printf(" divisible by 3.\n");
    } else {
        printf("not divisible by 3.\n");
    }
    
    return 0;
}



#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n % 10 == 0) {
        printf("The last digit of the number is 0.\n");
    } else {
        printf("The last digit of the number is not 0.\n");
    }
    
    return 0;
}



#include<stdio.h>
int main()
{
    int s, v, a;
    scanf("%d%d%d", &s, &v, &a);

    int Bill1 = s * a; // Calculate the first bill based on s and a
    int Bill2 = v * a; // Calculate the second bill based on v and a

    printf("Bill1: %d\n", Bill1);
    printf("Bill2: %d\n", Bill2);

    return 0;
}


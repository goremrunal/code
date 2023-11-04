 #include <stdio.h>
 
int main()
 {
    int MRP;
    printf("Enter the MRP: ");
    scanf("%d", &MRP);

    int discount;
    printf("Enter the discount percentage: ");
    scanf("%d", &discount);

    int discountAmount = (MRP * discount) / 100;
    int sp = MRP - discountAmount;

    printf("Selling Price (SP): %d\n", sp);

    return 0;
}


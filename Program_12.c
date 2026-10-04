#include <stdio.h>
#include <conio.h>

void main() {
    float billAmount;
    clrscr();
    printf("Enter bill amount: ");
    scanf("%f", &billAmount);
    if (billAmount >= 500.0) {
        printf("You qualify for a discount!\n");
        billAmount = billAmount - 50.0;
    }
    printf("Final Payable Amount: %.2f\n", billAmount);
    getch();
}

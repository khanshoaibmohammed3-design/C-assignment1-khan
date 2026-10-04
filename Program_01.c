#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, sum;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    getch();
}

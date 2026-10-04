#include <stdio.h>
#include <conio.h>

void main() {
    int value;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &value);
    if (value > 0) {
        printf("The number is POSITIVE.\n");
    } else if (value < 0) {
        printf("The number is NEGATIVE.\n");
    } else {
        printf("The number is ZERO.\n");
    }
    getch();
}

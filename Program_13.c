#include <stdio.h>
#include <conio.h>

void main() {
    int num;
    clrscr();
    printf("Enter any integer number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }
    getch();
}

#include <stdio.h>
#include <conio.h>

void main() {
    char operatorSymbol;
    int n1 = 10, n2 = 5;
    clrscr();
    printf("Enter operator choice (+ or -): ");
    scanf(" %c", &operatorSymbol);
    switch(operatorSymbol) {
        case '+':
            printf("Result: %d\n", n1 + n2);
            break;
        case '-':
            printf("Result: %d\n", n1 - n2);
            break;
        default:
            printf("Invalid Option Selected!\n");
    }
    getch();
}

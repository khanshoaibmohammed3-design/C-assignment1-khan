#include <stdio.h>
#include <conio.h>

void main() {
    char myChar;
    clrscr();
    printf("Press any character key: ");
    myChar = getch();
    printf("\nYou pressed: ");
    putch(myChar);
    getch();
}

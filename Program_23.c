#include <stdio.h>
#include <conio.h>

void main() {
    int count = 10;
    clrscr();
    while (count >= 2) {
        printf("Counter: %d\n", count);
        count = count - 2;
    }
    getch();
}

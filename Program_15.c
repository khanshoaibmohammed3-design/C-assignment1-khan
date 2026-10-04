#include <stdio.h>
#include <conio.h>

void main() {
    int x, y, z;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        if (x > z) {
            printf("%d is the largest.\n", x);
        } else {
            printf("%d is the largest.\n", z);
        }
    } else {
        if (y > z) {
            printf("%d is the largest.\n", y);
        } else {
            printf("%d is the largest.\n", z);
        }
    }
    getch();
}

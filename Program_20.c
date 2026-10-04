#include <stdio.h>
#include <conio.h>

void main() {
    int dayNumber;
    clrscr();
    printf("Enter day index number (1-2): ");
    scanf("%d", &dayNumber);
    switch(dayNumber) {
        case 1:
            printf("Today is Monday.\n");
            break;
        case 2:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Invalid Day Index Entered!\n");
    }
    getch();
}

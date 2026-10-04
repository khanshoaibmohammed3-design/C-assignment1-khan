#include <stdio.h>
#include <conio.h>

void main() {
    int userChoice;
    clrscr();
    do {
        printf("\n--- DASHBOARD SYSTEM MENU ---\n");
        printf("1. Display System Message\n");
        printf("2. Exit Program Runtime Loop\n");
        printf("Enter option code number choice: ");
        scanf("%d", &userChoice);
        if(userChoice == 1) {
            printf("System Running Correctly!\n");
        }
    } while(userChoice != 2);
    printf("Program Closed Cleanly.\n");
    getch();
}

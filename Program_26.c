#include <stdio.h>
#include <conio.h>

void main() {
    int inputVal, runningSum = 0;
    clrscr();
    do {
        printf("Enter a number to add (or 0 to stop): ");
        scanf("%d", &inputVal);
        runningSum = runningSum + inputVal;
    } while(inputVal != 0);
    printf("Final Calculated Sum Value = %d\n", runningSum);
    getch();
}

#include <stdio.h>
#include <conio.h>

void main() {
    float principal, rate, time, si;
    clrscr();
    principal = 1000.0;
    rate = 5.5;
    time = 2.0;
    si = (principal * rate * time) / 100.0;
    printf("Calculated Simple Interest = %.2f\n", si);
    getch();
}

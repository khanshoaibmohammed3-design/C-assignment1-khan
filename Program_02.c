#include <stdio.h>
#include <conio.h>

void main() {
    float length, width, area;
    clrscr();
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area of the rectangle = %.2f\n", area);
    getch();
}

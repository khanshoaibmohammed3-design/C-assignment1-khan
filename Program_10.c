#include <stdio.h>
#include <conio.h>

void main() {
    char name[50];
    clrscr();
    puts("Enter your full name: ");
    gets(name);
    puts("\nYou entered the name: ");
    puts(name);
    getch();
}

#include <stdio.h>
#include <conio.h>

void main() {
    int score;
    clrscr();
    printf("Enter test score: ");
    scanf("%d", &score);
    if (score >= 80) {
        printf("Grade: A\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
    } else if (score >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }
    getch();
}

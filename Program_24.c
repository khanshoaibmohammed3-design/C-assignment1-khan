#include <stdio.h>
#include <conio.h>

void main() {
    int limit, i = 1, aggregateSum = 0;
    clrscr();
    printf("Enter calculation count boundary limit: ");
    scanf("%d", &limit);
    while (i <= limit) {
        aggregateSum = aggregateSum + i;
        i++;
    }
    printf("The total accumulated sum = %d\n", aggregateSum);
    getch();
}

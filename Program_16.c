#include <stdio.h>
#include <conio.h>

void main() {
    int id = 123, key = 999;
    int enteredId, enteredKey;
    clrscr();
    printf("Enter ID: ");
    scanf("%d", &enteredId);
    if (enteredId == id) {
        printf("Enter Key: ");
        scanf("%d", &enteredKey);
        if (enteredKey == key) {
            printf("Access Granted!\n");
        } else {
            printf("Wrong Key!\n");
        }
    } else {
        printf("Wrong ID!\n");
    }
    getch();
}

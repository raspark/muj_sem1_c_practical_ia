// Program to check whether the entered year is leap year or not.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year.");
    } else {
        printf("Not a leap year.");
    }

    return 0;
}



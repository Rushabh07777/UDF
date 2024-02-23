#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}
void printLeapYears(int startYear, int endYear) {
    printf("Leap years between %d and %d:\n", startYear, endYear);
    while (startYear <= endYear) {
        if (isLeapYear(startYear)) {
            printf("%d ", startYear);
        }
        startYear++;
    }
    printf("\n");
}
int main() {
    int startYear, endYear;
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);
    printLeapYears(startYear, endYear);

    return 0;
}

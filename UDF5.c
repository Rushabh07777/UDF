#include <stdio.h>
void printOddNumbers(int N) {
    printf("Output:\n");
    while (N >= 1) {
        if (N % 2 != 0) {
            printf("%d ", N);
        }
        N--;
    }
    printf("\n");
}
int main() {
    int num;
    printf("\n");
    printf("Enter any number: ");
    scanf("%d", &num);
    printOddNumbers(num);

    return 0;
}

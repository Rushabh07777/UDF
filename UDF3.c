#include <stdio.h>
void printNumbers(int start, int end) {
    while (start >= end) {
        printf("%d ", start);
        start--;
    }
}

int main() {
    printNumbers(10 ,1);

    return 0;
}
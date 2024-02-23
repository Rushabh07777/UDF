#include <stdio.h>
void printNumbers(int start, int end) {
    while (start <= end) {
        printf("%d ", start);
        start++;
    }
}

int main() {
    printNumbers(1,7);

    return 0;
}
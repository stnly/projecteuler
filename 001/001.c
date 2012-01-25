#include <stdio.h>

int main (void) {
    int sum = 0, num = 0;
    for (num = 0; num < 1000; num++) {
        if (num%3 == 0 || num % 5 == 0) {
            sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}
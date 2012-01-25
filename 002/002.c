#include <stdio.h>

int main(int argc, char* argv[]) {
    int sum = 0, a = 0, p = 1, l = 1;
    while (l < 4000000) {
        if (l % 2 == 0) {
            sum += l;
        }
        a = l;
        l = p + l;
        p = a;
    }
    printf("%d\n",sum);
    return 0;
}
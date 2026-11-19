#include <stdio.h>
int main() {
    int n = 60;
    unsigned long long a = 1;  // f(1) = 1
    unsigned long long b = 2;  // f(2) = 2

    for (int i = 3; i <= n; i++) {
        unsigned long long c = a + b;  // f(i) = f(i-2) + f(i-1)
        a = b;
        b = c;
    }
    printf("%llu\n", b);
    return 0;
}

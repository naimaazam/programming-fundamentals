#include <stdio.h>

int main() {
    int n;
    long long catalan = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        catalan = catalan * (2 * (2 * i - 1)) / (i + 1);
    }

    printf("Catalan number = %lld", catalan);

    return 0;
}

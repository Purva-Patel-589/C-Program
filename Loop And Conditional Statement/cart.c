#include <stdio.h>

int main() {
    int n, i;
    double price, total = 0.0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &price);
        total += price;
    }
    printf("%.2lf\n", total);
    return 0;
}

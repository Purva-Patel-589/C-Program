#include <stdio.h>

void swapInt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapDouble(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int value[], int weight[], double ratio[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                swapInt(&value[j], &value[j + 1]);
                swapInt(&weight[j], &weight[j + 1]);
                swapDouble(&ratio[j], &ratio[j + 1]);
            }
        }
    }
}

double Knapsack(int value[], int weight[], int n, int W) {
    double ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = (double)value[i] / weight[i];
    }
    sort(value, weight, ratio, n);
    double total = 0.0;
    int cw = 0;
    for (int i = 0; i < n; i++) {
        if (cw + weight[i] <= W) {
            cw += weight[i];
            total += value[i];
        } else {
            int remain = W - cw;
            total += value[i] * ((double)remain / weight[i]);
            break;
        }
    }
    return total;
}

int main() {
    int n, W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int value[n], weight[n];

    printf("Enter value and weight of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d (value weight): ", i + 1);
        scanf("%d %d", &value[i], &weight[i]);
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    double max = Knapsack(value, weight, n, W);

    printf("Maximum value in Knapsack = %.2f\n", max);

    return 0;
}
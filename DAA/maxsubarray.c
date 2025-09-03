#include <stdio.h>
#include <limits.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int maxcross(int arr[], int l, int m, int h) {
    int sum = 0, ls = INT_MIN, rs = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        if (sum > ls) ls = sum;
    }
    sum = 0;
    for (int i = m + 1; i <= h; i++) {
        sum += arr[i];
        if (sum > rs) rs = sum;
    }
    return ls + rs;
}

int maxSubArray(int arr[], int l, int h) {
    int L, R, C;
    if (l == h) return arr[l];
    if (l < h) {
        int m = (l + h) / 2;
        L = maxSubArray(arr, l, m);
        R = maxSubArray(arr, m + 1, h);
        C = maxcross(arr, l, m, h);
    }
    return max(L, R, C);
}

int main() {
    int arr[] = {-2, 5, 6, 2, -3, -1, -4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxSubArray(arr, 0, n - 1);
    printf("Maximum Subarray Sum = %d\n", ans);
    return 0;
}
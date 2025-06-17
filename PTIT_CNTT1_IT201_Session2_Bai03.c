#include <stdio.h>
#include <math.h>

void reverse(int a[], int size) {
    int i, j;
    for(i = 0, j = size - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int a[10000], n;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    reverse(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
#include <stdio.h>
#include <math.h>

void deleteArr(int a[], int *size, int p) {
    if (p >= *size || p < 0) {
        printf("Khong hop le\n");
        return;
    }
    for(int i = p; i < *size - 1; i++) a[i] = a[i + 1];
    (*size)--;
}
int a[10000], n, p;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &p);
    deleteArr(a, &n, p);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
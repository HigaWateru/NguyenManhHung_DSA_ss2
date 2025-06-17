#include<stdio.h>
#include<math.h>

void addArr(int a[], int *size, int v, int p) {
    if (p >= *size || p < 0) {
        printf("Khong hop le\n");
        return;
    }
    for(int i = *size - 1; i >= p; i--) a[i + 1] = a[i];
    a[p] = v;
    (*size)++;
}
int a[10000], n, v, p;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("position: ");
    scanf("%d", &p);
    printf("value: ");
    scanf("%d", &v);
    addArr(a, &n, v, p);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
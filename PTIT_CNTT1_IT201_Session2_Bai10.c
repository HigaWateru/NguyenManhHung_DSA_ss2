#include<stdio.h>
#include <stdlib.h>

int *a, n, count[10000], min, max, maxCount;
int main() {
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
        min = a[i] < min ? a[i] : min;
        max = a[i] > max ? a[i] : max;
        maxCount = count[a[i]] > maxCount ? count[a[i]] : maxCount;
    }
    free(a);
    for(int i = min; i <= max; i++) if (count[i] > 0) printf("Phan tu %d xuat hien %d lan\n", i, count[i]);
    return 0;
}

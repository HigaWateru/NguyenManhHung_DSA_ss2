#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>

int *a, n;
int main() {
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n - 1; i++) {
        bool checked = false;
        for (int j = i + 1; j < n; j++) if (a[i] < a[j]) {
            checked = true;
            break;
        }
        if (!checked) printf("%d ", a[i]);
    }
    printf("%d", a[n-1]);
    free(a);
    return 0;
}

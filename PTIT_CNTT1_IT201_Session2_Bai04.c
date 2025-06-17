#include <stdio.h>
#include <math.h>
void editArr(int a[], int size, int v, int p) {
    if (p < size) a[p] = v;
    else printf("!!!!!\n");
}
int a[10000], n, v, p;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("position: ");
    scanf("%d", &p);
    printf("value: ");
    scanf("%d", &v);
    editArr(a, n, v, p);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
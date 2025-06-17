#include<stdio.h>
#include<math.h>

int countNum(int a[], int size, int x) {
    int count = 0;
    for(int i = 0; i < size; i++) if(a[i] == x) count++;
    return count;
}
int a[10000], n, x;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    printf("%d", countNum(a, n, x));
    return 0;
}
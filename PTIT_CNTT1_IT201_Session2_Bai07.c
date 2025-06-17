#include<stdio.h>
#include <stdbool.h>
#include<math.h>

int a[10000], n, x;
bool checked = false;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) if (a[i] + a[j] == x) {
        checked = true;
        printf("%d %d\n", a[i], a[j]);
    }
    if (checked == false) printf("Khong tim thay");
    return 0;
}
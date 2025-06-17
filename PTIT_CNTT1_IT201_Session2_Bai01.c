#include<stdio.h>
#include<math.h>

int maxElem(int a[], int size){
    int max = a[0];
    for(int i = 1; i < size; i++) if(a[i] > max) max = a[i];
    return max;
}
int a[10000], n;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d", maxElem(a, n));
    return 0;
}
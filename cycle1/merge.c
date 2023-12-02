#include <stdio.h>

void main() {
    int a[30], b[30], merge[60], i, j, k, s;
    printf("Enter the number elements in A: ");
    scanf("%d", &m);
    printf("Enter the number elements in B: ");
    scanf("%d", &n);
    printf("Enter the elements of A:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of B:\n ");
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }
    s = m + n;
    i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] == b[j]) {
            merge[k++] = a[i++];
        } else if (a[i] < b[j]) {
            merge[k++] = a[i++];
        } else {
            merge[k++] = b[j++];
        }
    }
    while (i < m)
        merge[k++] = a[i++];
    while (j < n)
        merge[k++] = b[j++];
    printf("The merged list is: ");
    for (i = 0; i < s; i++)
        printf("%d\n", merge[i]);
}

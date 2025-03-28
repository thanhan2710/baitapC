#include <stdio.h>
void nhapmatran(int a[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void inmatran(int a[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
}
void tongmatran(int a[10][10], int b[10][10], int c[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void nhanmatran(int a[10][10], int b[10][10], int c[10][10], int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = 0;
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main() {
    int a[10][10], b[10][10], c[10][10];
    int n, m, p;
    printf("Nhap vao so hang cua ma tran 1: ");
    scanf("%d", &n);
    printf("Nhap vao so cot cua ma tran 1 (so hang cua ma tran 2): ");
    scanf("%d", &m);
    printf("Nhap vao so cot cua ma tran 2: ");
    scanf("%d", &p);
    printf("Nhap cac so hang cua ma tran thu 1:\n");
    nhapmatran(a, n, m);
    printf("Nhap cac so hang cua ma tran thu 2:\n");
    nhapmatran(b, m, p);
    printf("Ma tran tong hop la:\n");
    tongmatran(a, b, c, n, m);
    inmatran(c, n, m);
    printf("Tich hai ma tran la:\n");
    nhanmatran(a, b, c, n, m, p);
    inmatran(c, n, p);
    return 0;
}

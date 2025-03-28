#include <stdio.h>
void nhapmatran(int a[20][20],int rows , int cols){
    for(int i = 0;i < rows;i++){
        for(int j = 0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int main(){
    int n,m,p;
    int a[20][20],b[20][20],c[20][20];
    printf("Nhap vao so hang cua ma tran 1: ");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran 1(So hang cua ma tran 2): ");
    scanf("%d",&p);
    printf("Nhap vao so cot cua ma tran 2: ");
    scanf("%d",&m);
    printf("Nhap vao cac phan tu cua ma tran 1:\n");
    nhapmatran(a,n,p);
    printf("Nhap vao cac phan tu cua ma tran 2:\n");
    nhapmatran(b,p,m);
    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j < m ; j++){
              c[i][j] = 0;
            for(int k = 0;k < p;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Tich cua hai ma tran la:\n");
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}

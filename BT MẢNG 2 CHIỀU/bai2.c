#include <stdio.h>
int main(){
    int n,m;
    printf("Nhap so luong hang va cot cua ma tran: ");
    scanf("%d %d", &n , &m);
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j=0;j< m;j++){
            printf("Nhap vao gia tri hang %d cot %d : ",i , j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i < n;i++){
        for(int j = 0 ;j<m;j++ ){
            printf("%d ",a[i][j]);
        }
        printf("\n");
      }}


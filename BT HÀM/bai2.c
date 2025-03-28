#include <stdio.h>
int giaithua(int n){
    if(n==0 || n== 1) return 1;
    else return n*giaithua(n-1);
}
int main(){
    int n;
    printf("Nhap vao gia tri cua n: ");
    scanf("%d",&n);
    giaithua(n);
    printf("%d! = %d",n , giaithua(n));
}

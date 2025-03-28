#include <stdio.h>
int fibonacci(int n){
   if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Nhap vao so nguyen n bat ki: ");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        printf(" %d ",fibonacci(i));
    }
    printf("\nPhan tu thu %d trong day fibonacci la: %d",n ,fibonacci(n));

}

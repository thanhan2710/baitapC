#include <stdio.h>
#include <stdlib.h>
void sapxep(int *a,int l,int r){
    int i = l,j = r;
    int s = a[(l+r)/2];
    if(i<=j){
        while(*(a+i)<s) i++;
        while(*(a+j)>s) j--;
        int temp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = temp;
        i++;
        j--;
    }
    if(l<j) sapxep(a,l,j);
    if(i<r) sapxep(a,i,r);
}
int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n* sizeof(int));
    if(ptr == NULL){
        printf("Loi dia chi!!");
        return 1;
    }
    for(int i = 0;i<n;i++){
        scanf("%d",ptr + i);
    }
    sapxep(ptr,0,n-1);
    for(int i = 0;i<n;i++){
        printf("%d ",*(ptr + i));
    }
    free(ptr);
}

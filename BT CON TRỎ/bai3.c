#include <stdio.h>
int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    int *ptr = a;
    for(int i = 0;i < n;i++){
        scanf("%d",&ptr[i]);
    }
    int min = *ptr , max = *ptr;
    for(int i = 1;i< n ; i++){
        if(*(ptr + i)< min ){
            min = *(ptr + i);
        }
        if(*(ptr + i)>max){
            max = *(ptr + i);
        }
    }
    printf("gia tri nho nhat cua mang la: %d ",min);
    printf("\nGia tri lon nhat cua mang la: %d ",max);
}

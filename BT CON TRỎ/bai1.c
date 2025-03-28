#include <stdio.h>
void swap(float *x,float *y){
    float temp = *x;
    *x = *y;
    *y = temp ;
}
int main(){
    float a = 1000.7823 , b = 2000.126736;
    swap(&a, &b);
    printf(" %.2f ",a,b);
}

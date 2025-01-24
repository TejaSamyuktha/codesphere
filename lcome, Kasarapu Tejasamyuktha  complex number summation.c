#include<stdio.h>
typedef struct cn{
    int r;
    int i;
}complex;
complex add(complex x,complex y){
    complex add;
    add.r=x.r+y.r;
    add.i=x.i+y.i;
    return (add);
}
int main(){
    complex x,y,sum;
    x.r=1;
    x.i=2;y.r=3;
    y.i=4;
    sum=add(x,y);
    printf("sum=%d + %di",sum.r,sum.i);
    return 0;
}

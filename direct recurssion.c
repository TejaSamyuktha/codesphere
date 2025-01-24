//direct recurssion
#include<stdio.h>
void f(int n){
    if(n>0){
     printf("%d ",n);//6 5 4 3 2 1
      f(n-1);
    }
    
}
int main(){
    f(6);
    return 0;
}

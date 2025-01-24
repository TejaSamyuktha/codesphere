//tail recurrsion
#include <stdio.h>
void tail(int n){
    if (n==0){
        return ;
    }
   
    printf("%d ",n);
    tail(n-1);
    
}

int main()
{
    int n=6;
    tail(n);
    

    return 0;
}

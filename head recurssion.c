//head recurssion
#include <stdio.h>
void head(int n){
    if (n==0){
        return ;
    }
    head(n-1);
    printf("%d ",n);
    
}

int main()
{
    int n=6;
    head(n);
    

    return 0;
}

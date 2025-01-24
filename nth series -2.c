//series program:0,0,7,6,14,12....
//              7^0,6^0,7^1,6^1.....
#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int a;

    if(n%2==0){
           a=6*(n/2-1);
        
    }
    else{
        a=7*(n/2);
    }
    printf("%d ",a);
 


    return 0;
}

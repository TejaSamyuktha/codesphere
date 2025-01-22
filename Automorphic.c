#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    int n=a;
    b=a*a;
    int count=0;
    while(n>0){
        n/=10;
        count++;
        
    }
    int c=pow(10,count);
    int d=b%c;
    if(d==a){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
    

    return 0;
}


#include <stdio.h>
int prime(int num){
    if(num<1){
        return 0;
    }
    int i=2;
    while(i*i<=num){
        if(num%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int j=a;j<=b;j++){
        if(prime(j)){
            printf("%d ",j);
        }
    }
   

    return 0;
}

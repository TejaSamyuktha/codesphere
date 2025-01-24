//series program:1,1,2,3,4,9,8,27.....
                //2^0,3^0,2^1,3^1.....
#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a;
 
if(n%2==0){
    a=pow(3,n/2-1);
}
else{
    a=pow(2,n/2);
}
printf("%d",a);

    return 0;
}

#include <stdio.h>

int main()
{
   int a,sum=0,r;
   
   scanf("%d",&a);
   int temp=a;
   while(a>0){
       r=a%10;
       sum+=r;
       a=a/10;
   }
   if(temp%sum==0){
       printf("Niven's number");
   }
   else{
       printf("Not a Niven's number");
   }

    return 0;
}

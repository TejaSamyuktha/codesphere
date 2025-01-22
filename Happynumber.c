#include <stdio.h>

int main()
{
     int n,r;
   scanf("%d",&n);
   a: int sum=0;
   while(n>0){
       
       r=n%10;
       sum+=r*r;
       n=n/10;
       
   }
   
   if(sum>9){
       n=sum;
       goto a;
   }
   else if(sum == 1){
       printf("Happy number");
   }
   else{
       printf("Not a happy number");
   }
   
    

    return 0;
}

//strong number / krishnamurthy number
#include <stdio.h>

int main()
{
  int n,o,sum=0,r;
  scanf("%d",&n);
  o=n;
  while(n>0){
      r=n%10;
      int fact=1;
      for(int i=1;i<=r;i++){
          fact*=i;
          
      }
      sum+=fact;
      n/=10;
  }
  if(sum==o){
      printf("%d is a strong number",o);
  }
  else{
      printf("%d is not a strong number",o);
  }

    return 0;
}

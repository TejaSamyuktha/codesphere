#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
  

    return 0;
}

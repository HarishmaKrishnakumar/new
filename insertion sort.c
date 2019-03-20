#include <stdio.h>

int main()
{
    int N,i,j,t;
    scanf("%d",&N);
    int a[N];
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i+1<N;i++)
    { 
    
          while(a[i]>a[i+1])
           {
               t=a[i];
               a[i]=a[i+1];
               a[i+1]=t;
              
              i=0;  
               
           }
          
       
    }
    for(j=0;j<N;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}







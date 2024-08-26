#include <stdio.h>

void prime(int n)
{

    int a[n];
    for(int i=2;i<=n;i++)
    {
       a[i]=1;
    }

    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {

                a[j]=0;
            }
        }
    }
    for(int k=2;k<=n;k++)
    {
        if(a[k]==1)
            printf("%d ",k);
    }
}

int main()
{
   int n;
   printf("enter no");
   scanf("%d",&n);
   prime(n);
}

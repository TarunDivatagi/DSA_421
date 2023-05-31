#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x,i,temp;

     printf("enter no of no's");
       scanf("%d",&x);
    FILE *fpi;

    fpi=fopen("input.txt","r");
    if(fpi== NULL)
    {
        printf("file not read");
        return 1;
    }

    FILE *fpo;
    fpo=fopen("output.txt","w");
    if(fpo== NULL)
    {
        printf("file not created");
        return 1;
    }

     int a[100];
    for(i=0;i<x;i++)
    {
        if(fscanf(fpi,"%d",&a[i]) !=1)
        {
            printf("input not read");
            return 1;
        }
    }

    for(i=0;i<x-1;i++)
    {
        for(int j=0;j<x-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<x;i++)
    {
        fprintf(fpo,"%d\n",a[i]);
    }
    fclose(fpi);
    fclose(fpo);
    printf("\nx nos written to file output.txt");
    return 0;
}

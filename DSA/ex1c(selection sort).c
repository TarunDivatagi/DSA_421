#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionsort( int arr[],int n);
int main()
{
    int x,i;
    printf("enter no of values-");
    scanf("%d",&x);

    int *num = malloc(sizeof(int)*x);
    if(num ==NULL)
    {
        printf("error allocating");
        return 1;
    }

    FILE *fp;
    fp=fopen("input.txt","r");
    if(fp==NULL)
    {
        printf("error opening file");
        return 1;
    }

    for(i=0;i<x;i++)
    {
        fscanf(fp,"%d",&num[i]);
    }
     fclose(fp);

    clock_t start,end;
    double time_req;

    start=clock();
    selectionsort(num,x);
    end=clock();
    time_req=(double)(end-start)/CLOCKS_PER_SEC;

    printf("\nsorted no's are-");
    for(i=0;i<x;i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n Time required to sort %d no's is %f",x,time_req);

    free(num);

    return 0;
}

void selectionsort( int arr[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

// Print second largest element from array , if not print -1//


#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    if(second_large!=INT_MIN)
    return second_large;
    else
        return -1;
}

int main() {
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

        int sL=secondLargest(arr,n);

    cout<<"Second largest is "<<sL<<endl;
    return 0;
}



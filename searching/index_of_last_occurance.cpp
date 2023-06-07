// #include < bits/stdc++.h>
#include <iostream>
using namespace std;
int last_occurance(int arr[],int n,int x)
{
    int low=0,high = n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((arr[mid]==x) && (mid==(n-1) || arr[mid+1]>x ))
        return mid;
        if(arr[mid]>x)
        high=mid-1;
        else
        low=mid+1;

    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<last_occurance(arr,n,5)<<endl;
    return 0;
}
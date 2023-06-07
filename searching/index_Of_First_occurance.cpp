// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int recur_first_occurance(int arr[],int x,int end,int start=0)
{
    if(start>end)
    return -1;
    int mid=(start+end)/2;
    if((arr[mid]==x) && ( mid==0 || arr[mid-1]<x))
    return mid;
    if(arr[mid]<x)
    return recur_first_occurance(arr,x,end,mid+1);
    return recur_first_occurance(arr,x,end,mid-1);    

}

int first_occurance(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((arr[mid]==x) && (mid==0 || arr[mid-1]<x))
            return mid;
        else if(arr[mid]>x)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;

}
int main()    
{
    int arr[]={1,2,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<recur_first_occurance(arr,5,size-1)<<endl;;
    return 0;
}
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int count_and_merge(int arr[],int low,int mid,int high)
{
    int count=0;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int j=mid+1;
    for(int i=low;i<mid;i++)
    {
        while(j<high+1 && arr[i]>arr[j])
        {
            j++;
        }
        count+=j-mid-1;
    }
    return count;
    sort(arr+low,arr+high+1);

}
int count_inversion(int arr[],int low,int high)
{
    
    int res=0;
    if(low<high)
    {
    int mid=(low+high)/2;
    res+=count_inversion(arr,low,mid);
    res+=count_inversion(arr,mid+1,high);
    res+=count_and_merge(arr,low,mid,high);
    }
    return res;
}
int main()
{
    int arr[]={2,9,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<count_inversion(arr,0,n-1);
    return 0;
}
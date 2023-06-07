// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void count_sort(int arr[],int n, int exp)
{
    int c[10]={0};
    for(int i=0;i<n;i++)
        c[(arr[i]/exp)%10]++;
    for(int i=1;i<10;i++)
        c[i]+=c[i-1];
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[c[(arr[i]/exp)%10]-1]=arr[i];
        c[(arr[i]/exp)%10]--;
    }

    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
void radix_sort(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    for(int exp=1;max/exp >0;exp*=10)
    {
        count_sort(arr,n,exp);
    }
}

int main()
{
    int arr[]={102,346,105,52,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    radix_sort(arr,n);
    for(int i=0;i<n;i++)    
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}




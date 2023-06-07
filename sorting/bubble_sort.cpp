// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    while(n--)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
    }
}


int main()
{
    int arr[]={1,2,3,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}
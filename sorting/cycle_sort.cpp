// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
void cycle_sort_distinct(int arr[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int pos=cs;
        int item=arr[cs];
        for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
                pos++;
        swap(item,arr[pos]);

        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
                pos++;
            swap(item,arr[pos]);
            
        }
    }
}

int main()
{
    int arr[]={1,9,2,8,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cycle_sort_distinct(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
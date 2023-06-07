// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    int s=0;
    for(int j=0;j<n;j++)
    {
        int min_val= INT_MAX;
        int min_index;
        for(int i=s;i<n;i++)
       
        {
            if(arr[i]<min_val)
            {
                min_val=arr[i];
                min_index=i;
            }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[s];
        arr[s]=temp;
        s++;
    }
}


int main()
{
    int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
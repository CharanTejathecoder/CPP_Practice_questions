// #include <bits/stdc++.h>

#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        
        if(arr[i]<arr[i-1])
        {
            int temp=arr[i];
            int j=i-1;  
            while(j>=0 && arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}
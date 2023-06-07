// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// this function takes two sorted arrays and prints their sorted merged order 
// it is just to demonstrate the overall working method
void merge_print(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
            cout<<arr1[i++]<<" ";
        else
            cout<<arr2[j++]<<" ";
        
    }
    while(i<n1)
    cout<<arr1[i++]<<" ";
    while(j<n2)
    cout<<arr2[j++]<<" ";
    cout<<endl;
}
// merge function takes an array sorted in two parts.i.e it is sorted from [low, mid] and [mid+1,high]
// it merges the two arrays and gives output of an overall merged array
// this operation/algorithm works in-place


// it created two auxilary arrays of left and right merged parts
// then changes the original array using merge_print algoritm
void merge(int arr[],int low, int mid, int high)
{
    int m=mid-low+1,n=high-mid;
    int left[m],right[n];
    for(int i=0;i<m;i++)
        left[i]=arr[low+i];
    for(int i=0;i<n;i++)
        right[i]=arr[mid+1+i];         
    int i=0,j=0,k=low;
    while(i<m && j<n)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<m)
    arr[k++]=left[i++];
    while(j<n)
    arr[k++]=right[j++];
}

// recursive function to merge the arrays
void merge_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}

// Merge_sort algorithm works on O(n*logn) time complexity
// T(n)=2*T(n/2) + O(n);
// it takes an auxilary space of O(n)


int main()
{
    int arr[]={1,11,3,51,6,72,0,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int arr2[]={2,3,5,7};
    // int n2=sizeof(arr2)/sizeof(arr2[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
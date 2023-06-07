// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Naive Partition

int partition (int arr[],int n,int pi)
{
    int pivot=arr[pi];
    int temp[n],k=0,ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=pivot)
            temp[k++]=arr[i];
    }
    ans=k;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>pivot)
            temp[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
    return k;

}

// Lamuto partition
int lamutoPartition (int arr[],int low,int high)
{
    int i=low-1,j;
    for( j=low;j<high;j++)
    {
        if(arr[j]<arr[high])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[i+1],arr[high]);
        return i+1;
}

// Hoar's Partition
int hoarPartition (int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low-1,j=high+1;
    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)
        return j;
        
        swap(arr[i],arr[j]);

    }
}   

// Quick_sort using lamuto's partition
void quick_sort_lamuto (int arr[],int low,int high)
{
    if(low<high)
    {
        int p=lamutoPartition(arr,low,high);
        quick_sort_lamuto(arr,low,p-1);
        quick_sort_lamuto(arr,p+1,high);
    }
}
// Quick_sort using hoar's partition
void quick_sort_hoar (int arr[],int low,int high)
{
    if(low<high)
    {
        int p=hoarPartition(arr,low,high);
        quick_sort_hoar(arr,low,p);
        quick_sort_hoar(arr,p+1,high);
    }
}

int main()
{
    int arr[]={6,9,2,8,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort_hoar(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
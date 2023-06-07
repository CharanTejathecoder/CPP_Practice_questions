#include <iostream>
using namespace std;

// count_sort sorts fixed range :k, integer valued array of size n in O(n+k) time using O(k) auxilary space
void count_sort(int arr[],int n,int k)
{
    int temp[k];

    for (int i=0;i<k;i++)
            temp[i]=0;

    for(int i=0;i<n;i++)
        temp[arr[i]]++;
        
        int a=0;
    
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<temp[i];j++)
        {
            arr[a++]=i;
        }
    }
}

// it cannot be used to sort objects

// pseudo code for sorting objects is given below
void count_sort_objects(int arr[],int n, int k)
{
    int temp[k];
    for (int i=0;i<k;i++)
        temp[i]=0;
        
    for(int i=0;i<n;i++)
        temp[arr[i]]++;

    for(int i=1;i<k;i++)
        temp[i]+=temp[i-1];
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[temp[arr[i]]-1]=arr[i];
        temp[arr[i]]--;
    }
        
    for(int i=0;i<n;i++)
        arr[i]=output[i];
    

}
int main()
{
    int arr[]={1,2,1,0,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_sort(arr,n,3);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
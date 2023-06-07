// #include <bits.stdc++.h>


// this algorithm works on only sorted arrays in O(n)
#include <iostream>
using namespace std;
bool pair_sum(int arr[], int n, int sum)
{
    int low=0, high=n-1;
    
    while(low<high && low>-1 && high<n)
    {
        if(arr[low]+arr[high] >sum)
        high--;
        else if (arr[low]+arr[high] < sum)
        low++;
        else
        return true;
    }
    return false;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    cout<<pair_sum(arr,n,sum)<<endl;

    return 0;
}

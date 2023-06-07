// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binSearch(int arr[],int x, int s,int e)
{
    if(s>e)  return -1;
    int mid=(s+e)/2;
   
    if(x==arr[mid]) return mid;
   
    if(x>arr[mid]) return binSearch(arr,x,mid+1,e);
    
    return binSearch(arr,x,s,mid-1);
    
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<binSearch(arr,7,0,n)<<endl;
    
    return 0;
}
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <class T>
void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int median (int arr1[],int arr2[],int n1,int n2)
{
    // if(n2<n1)
    // {
    //     swap1(arr1,arr2);
    //     swap1(n1,n2);
    // }
    int i1,i2,low=0,high=(n1-1);
    while(low<=high)
    {
        i1=(low+high)/2;
        i2=((n1+n2+1)/2) -i1; 
        if(arr1[i1-1]<=arr2[i2] && arr2[i2-1]<=arr1[i1])
            return (max(arr1[i1-1],arr2[i2-1])+min(arr1[i1],arr2[i2]))/2;
        else if (arr1[i1-1]>arr2[i2])
            high=i1-1;
        else
            low=i1+1;
    }

 return -1;
}

int main()
{
    int arr1[]={1,2,3,4,5},arr2[]={2,3,8,9,10,11};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<median(arr1,arr2,n1,n2)<<endl;
    return 0;
}
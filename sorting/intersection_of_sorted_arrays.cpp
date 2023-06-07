// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void intersection(int a[],int b[],int m,int n)
{
    if(a[0]>b[0])
    {
        swap(a,b);
        swap(m,n);
    }
    int i=0,j=0;
    vector<int> ans;
    while(i<m && j<n)
    {
        if(a[i]==b[j])
        {
            if(ans.size()==0 || a[i]!=ans.back())
                ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
            j++;
        else
            i++;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={1,1,2,2,3,3,4,4,5};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={2,3,3,4,5,6,7};
    int n=sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);
    return 0;
}
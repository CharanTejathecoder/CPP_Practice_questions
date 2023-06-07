// #include <bitset>/stdc++.h>
#include <iostream>
using namespace std;
int jos0(int n,int k)
{
    if(n==1)
    return 0;
    
    return (jos0(n-1,k)+k)%n;
}
int jos1(int n,int k)
{
    return jos0(n,k)+1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<jos1(n,k);
    return 0;
}
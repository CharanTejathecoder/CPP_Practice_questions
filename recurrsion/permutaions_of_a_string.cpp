// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(char &a,char &b)
{
    char temp= a;
    a=b;
    b=temp;
}

void permute(string &s, int i=0)
{
    if(i==(s.length()-1))
       {
        cout<<s<<endl;
        return;
       }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    
    }
}

int main()
{
    string s;
    cin>>s;
    permute(s);
    
    return 0;
}
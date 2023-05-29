// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
void subsets(string &s, string temp="",int i=0)
{
    if(i==s.length())
    {
        cout<<temp<<endl;
        return;
    }
    subsets(s,temp,i+1);
    subsets(s,temp+s[i],i+1);
}

int main()
{
    string s;
    cin >> s;
    subsets(s);
    
    return 0;
}
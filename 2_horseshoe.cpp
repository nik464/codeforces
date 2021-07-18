#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a ,b,c,d;
    cin>>a>>b>>c>>d;
    set<int>s{a,b,c,d};  //created a set
    cout<<4-s.size();
}
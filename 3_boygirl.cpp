#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char>s;   //in previous question set<int> s{a,b,c,d};
    char a;
    while(cin>>a)
    {
       s.insert(a);         //inserting in set
     }

     cout<<(s.size()%2? "CHAT WITH HER" : "IGNORE HIM" ); //even girl
}
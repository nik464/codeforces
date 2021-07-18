#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    int n;
    cin>>n;
    int count =0;
    for(int i=0;i<n;i++)
    {
    int x,y,z=0;
    cin>>x>>y>>z;
    if(x+y+z>=2)
    count++;
    }
    cout<<count<<endl;
    return 0;
   
}
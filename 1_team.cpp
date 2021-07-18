#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int count =0;
    for(int i=0;i<n;i++)
    {
    int x,y,z=0;
    cin>>x>>y>>z;                           
    if(x+y+z>=2)                  //see the pattern 110 100 101  answer is 2 for petya and vasuya
     count++;
    }
    cout<<count<<endl;
    return 0;
   
}

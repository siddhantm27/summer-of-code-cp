#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x = c-a;
        long long y = d-b;
        long long steps = 0;
        if (x>=0 && y>=x)
        {
            steps = 2*(y-x)+x;
            cout<<steps<<"\n";
        }
        else if (x<0 && y>=0)
        {
            steps = 2*y - x;
            cout<<steps<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
    }
}
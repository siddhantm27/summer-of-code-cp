#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int numberOfIndices = 0;
        int sorted = 0;
        for (int i=0;i<n-1;i++)
        {
            if (a[i]<2*a[i+1])
            {
                sorted++;
            }
            else
            {
                sorted=0;
            }
            if (sorted==k)
            {
                numberOfIndices++;
                sorted--;
            }
        }
        cout<<numberOfIndices<<"\n";

        // -----------ALT VERSION-----GOT TLE :(-----------------
        // int windowStart=0;
        // while (windowStart+k<n)
        // {
        //     bool sorted = true;
        //     for (int i=windowStart;i<windowStart+k;i++)
        //     {
        //         if (a[i]>=a[i+1]<<1)
        //         {
        //             sorted=false;
        //             windowStart=i+1;
        //             break;
        //         }
        //     }
        //     if (sorted)
        //     {
        //         numberOfIndices++;
        //         windowStart++;
        //     }
        // }
        // cout<<numberOfIndices<<"\n";
    }
}
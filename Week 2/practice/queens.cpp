#include<bits/stdc++.h>
using namespace std;

void place_queens(int n,bool chessboard[][])
{
    for(int i=0;i<n;i++)
    {   
        if (chessboard[n][i]) continue;
        for (int j=0;j<n;j++)
        {
            chessboard[j][i]=1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    bool chessboard[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            chessboard[i][j]=0;
        }
    }
}
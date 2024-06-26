#include <bits/stdc++.h>
using namespace std;
void tower(int n, int start, int end)
{
    if (n == 1)
    {
        cout << start << " " << end << "\n";
    }
    else
    {
        int temp;
        for (int i = 1; i <= 3; i++)
        {
            if (i != start && i != end)
            {
                temp = i;
            }
        }
        tower(n - 1, start, temp);
        cout << start << " " << end << "\n";
        tower(n - 1, temp, end);
    }
}
int count(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * count(n - 1) + 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int ways = 0;
    cout<<count(n)<<"\n";
    tower(n, 1, 3);
}
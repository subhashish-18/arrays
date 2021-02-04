#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n][m];
    int a2[n][m];

    //** taking input a1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a1[i][j];
        }
    }

    //** taking input a2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a2[i][j];
        }
    }
    //** adding a1 and a2
    int ans[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = a1[i][j] + a2[i][j];
        }
    }
    //** printing sum of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}
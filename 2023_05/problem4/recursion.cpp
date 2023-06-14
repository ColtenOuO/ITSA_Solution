#include <iostream>
#define int long long

using namespace std;

int dp[30];

int f(int n)
{
    if( n == 0 || n == 1 ) return 1;
    if( dp[n] != 0 ) return dp[n];

    dp[n] = f(n-1) + f(n-2);
    return dp[n];
}

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << f(n) << "\n";
    }

    return 0;
}

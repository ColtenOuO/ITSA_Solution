#include <iostream>

using namespace std;

int a[21],dp[21][20001];

int main(void)
{
    int n,sum = 0;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i] , sum += a[i];
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<=sum/2;k++)
        {
            if( k - a[i] >= 0 ) dp[i][k] = max( dp[i-1][k] , dp[i-1][k-a[i]] + a[i] );
            else dp[i][k] = dp[i-1][k];
        }
    }
    
    cout << ( sum  - dp[n][sum/2] ) - dp[n][sum/2] << "\n";
}

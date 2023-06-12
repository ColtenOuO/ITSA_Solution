#include <iostream>
#include <cmath>

#define int long long

using namespace std;

int a[20],ans = 1e9,n;

void dfs(int idx,int sum1,int sum2)
{
    if( idx == n )
    {
        ans = min(ans,abs(sum1-sum2));
        return;
    }

    dfs(idx+1,sum1+a[idx],sum2);
    dfs(idx+1,sum1,sum2+a[idx]);
}
signed main()
{
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    dfs(0,0,0);

    cout << ans << "\n";
}

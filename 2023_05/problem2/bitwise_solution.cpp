#include <iostream>
#include <vector>

#define int long long

using namespace std;

signed main(void)
{
    int n,total = 0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i] , total += a[i];
   
    int ans = 1e9;
    
    for(int i=0;i<(1<<n);i++)
    {
        int sum = 0;
        for(int k=0;k<n;k++)
        {
            if( ( i & ( 1 << k ) ) != 0 ) sum += a[k];
        }

        int sum2 = total - sum;
        ans = min(ans,abs(sum-sum2));
    }

    cout << ans << "\n";

    return 0;
}

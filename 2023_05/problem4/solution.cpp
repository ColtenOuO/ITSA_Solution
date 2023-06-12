#include <iostream>
#define int long long

using namespace std;

int f[21];

signed main()
{
    f[0] = 1 , f[1] = 1;
    for(int i=2;i<=20;i++) f[i] = f[i-1] + f[i-2];

    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}

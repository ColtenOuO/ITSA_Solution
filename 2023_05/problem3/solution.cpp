#include <iostream>
#include <iomanip>
#define int long long

using namespace std;

char id[21];
int w[21];

void init()
{
    for(int i=0;i<26;i++) w[i] = -1;
    return;
}
double solve(double num)
{
    num *= 1000;
    if( (int)num % 10 >= 5 ) num /= 10 , num += 1 , num /= 100;
    else num /= 1000;

    return num;
}
signed main(void)
{
    int n,sum = 0;
    cin >> n;
    
    init();
    for(int i=0;i<n;i++) cin >> id[i] >> w[ id[i] - 'A' ] , sum += w[ id[i] - 'A' ];
    for(int i=0;i<26;i++)
    {
        if( w[i] != -1 )
        {
            double ans = (double)w[i] / (double)sum;
            
            ans = solve(ans);
            ans *= 100;
            ans = (int)ans;
            ans /= 100;

            cout << fixed << setprecision(2) << (char)('A'+i) << "(" << ans  << ")\n";
        }
    }
    return 0;
}

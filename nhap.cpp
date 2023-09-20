#include<iostream>
using namespace std;

const long long oo = 1e18;
long long dp[1000001], a[1000001], n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) dp[i] = oo;

    dp[0] = dp[1] = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 <= n) dp[i + 1] = min(dp[i + 1], dp[i] + a[i + 1]);
        if (i + 2 <= n) dp[i + 2] = min(dp[i + 2], dp[i] + a[i + 2]);
    }
    
    cout << dp[n];
    return 0;
}
// lê đình bảo tín

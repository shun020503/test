#include<iostream>
using namespace std;

const long long oo = 1e18;

bool check[1000001];
long long dp[1000001], a[1000001], n;

long long cal(int idx)
{
    if (idx == n) return 0;
    if (check[idx] == true) return dp[idx];
    check[idx] = true;

    dp[idx] = oo;
    if (idx + 1 <= n) dp[idx] = min(dp[idx], cal(idx + 1) + a[idx + 1]);
    if (idx + 2 <= n) dp[idx] = min(dp[idx], cal(idx + 2) + a[idx + 2]);

    return dp[idx];
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) check[i] = false;

    cout << cal(0);
    return 0;
}
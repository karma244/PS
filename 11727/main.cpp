#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int dp[1001] = {0, 1, 3, 5, 11};
//dp[i] = dp[i-1] + dp[i-2] * 2

int main() {
    ios_base::sync_with_stdio(true); cin.tie(0);
    int n; cin >> n;
    for (int i = 4; i <= n; i++) dp[i] = (dp[i-1] + dp[i-2] * 2) % 10007;
    cout << dp[n];
}
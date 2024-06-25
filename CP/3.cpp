#include <iostream>
#include <vector>

using namespace std;
# define int long long int
const int mod=1e9+7;

long long countInversions(int N, int C) {
    vector<vector<long long>> dp(N + 1, vector<long long>(C + 1, 0));
    dp[0][0] = 1;

    for (int n = 1; n <= N; ++n) {
        for (int c = 0; c <= C; ++c) {
            for (int k = 0; k <= min(c, n - 1); ++k) {
                dp[n][c] =(dp[n][c]%mod+dp[n - 1][c - k]%mod)%mod ;
            }
        }
    }

    return dp[N][C];
}

int32_t main() {
    int N, C;
    cin >> N >> C;

    cout << countInversions(N, C) << endl;

    return 0;
}

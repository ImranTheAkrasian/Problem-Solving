#include<bits/stdc++.h>

using namespace std;
//#define int long long
#define endl "\n" 
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define len(a) sizeof(a) / sizeof(int)
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()



void solve() {
    int n, m, k, ans;
    cin >> n >> m >> k;
    ans = 0;

    if (k == 1) ans = 1; // only way to take 0.
    else if (k == 2) {
        if (n >= m) ans = m;
        else ans = n + m / n - 1; // n - 1 + (all multipls of n)
    }
    else if (k == 3) ans = max(0, m - n - m / n + 1); // remove all multiples of n from m - n + 1;

    cout << ans << endl;

}

int32_t main() {
    Faster;
    int t;
    cin >> t;
    while (t--) solve();   
    return 0;
}

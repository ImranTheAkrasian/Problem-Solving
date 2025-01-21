#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n" 
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define len(a) sizeof(a) / sizeof(int)
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()


void solve() {
    int n, m, k, mx, mn, sum;
    cin >> n >> m >> k;
    sum = 0;

    vector < int > a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(all(a));
    sort(all(b));

    if (a[n-1] < b[m-1]) swap(a[0], b[m-1]); // replace max in a with min of a.
    else if (a[n-1] > b[m-1] && a[0] < b[m-1]) swap(a[0], b[m-1]); // To increase the min(a) replace it with the max(b).
    else if (a[n-1] == b[m-1] && a[0] < b[m-1]) swap(a[0], b[m-1]); // To increase the min(a) replace it with the max(b).

    for (int i = 0; i < n; i++) sum += a[i];

    if (k % 2 == 0) sum = sum - max(a[0], a[n-1]) + min(b[0], b[m-1]); // in 2nd round b will increas its sum by replacing max(a) by min(b).

    cout << sum << endl;
}

int32_t main() {
    Faster;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

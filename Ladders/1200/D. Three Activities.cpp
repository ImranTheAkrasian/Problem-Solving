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
    int n, ans; 
    cin >> n;
    ans = 0;
    vector < pair < int, int > > a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(all(a), greater<pair < int, int > >());
    sort(all(b), greater<pair < int, int > >());
    sort(all(c), greater<pair < int, int > >());


    for (int i = 0; i < min(6, (int)a.size()); i++) { // a[i] will find its best combination.
                                                      // for better results choose from two indices.
        for (int j = 0; j < min(6, (int)a.size()); j++) {

            if (a[i].second == b[j].second) continue; // same day so can't take

            for (int k = 0; k < min(6, (int)a.size()); k++) {

                if (a[i].second == c[k].second || b[j].second == c[k].second) continue; // same day so can't take
                ans = max(ans, a[i].first + b[j].first + c[k].first);
            }
        }
    }

    cout << ans << endl;
}

int32_t main() {

    Faster;
    int t; 
    cin >> t;
    while (t--) solve(); 

    return 0;
}

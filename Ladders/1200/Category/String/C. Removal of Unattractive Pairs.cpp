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
    int n, mxFrq;
    string st;
    cin >> n >> st;
    mxFrq = 0;

    vector < int > charFrq(26);

    for (int i = 0; i < n; i++) charFrq[st[i] - 'a']++;

    for (int i = 0; i < 26; i++) mxFrq = max(mxFrq, charFrq[i]); // find max frequency 

    if (mxFrq > n / 2) cout << 2 * mxFrq - n << endl; // find how many max identical will remain undestroyed by other characters.
    else cout << n % 2 << endl;
}

int32_t main() {
    Faster;
    int t; 
    cin >> t;
    while (t--) solve();   
    return 0;
}

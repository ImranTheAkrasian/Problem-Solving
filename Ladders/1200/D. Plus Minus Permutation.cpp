#include<bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n" 
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define len(a) sizeof(a) / sizeof(int)
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()


int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

void solve() {
    int n, x, y, ans, sum, lcm;
    cin >> n >> x >> y;

    lcm = (x / gcd(x, y)) * y;
    sum = n * (n + 1) / 2;

    if (x == y) ans = 0; // x's and y's indexes are same.

    else if (x > y) {
        if (x % y == 0) { 
            int m;
            m = n / y - n / x; // find the number a : y | x & x | a and minus from n/y;
            ans = -(m * (m + 1) / 2);
        } else {
            int m, p, k;
            m = n / x - n / lcm; // minus lcm's multiples form n/x.
            p = sum - ((n - m) * (n - m + 1) / 2); // add from 9 to n/x th number
            k = n / y - n / lcm; // minus lcm's multiples form n/y.
            ans = p - k * (k + 1) / 2; 
        }
    }
    else {
        if (y % x == 0) {
            int m;
            m = n / x - n / y; // find the number a : x | y & y | a and minus from n/x;
            ans = sum - ((n - m) * (n - m + 1) / 2);
        } else {
            int m, p, k;
            m = n / x - n / lcm;
            p = sum - (n - m) * (n - m + 1) / 2;
            k = n / y - n / lcm;
            ans = p - k * (k + 1) / 2;
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

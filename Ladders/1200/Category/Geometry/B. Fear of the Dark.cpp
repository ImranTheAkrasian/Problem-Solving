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
    // int px, py, ax, ay, bx, by;
    double pxD, pyD, axD, ayD, bxD, byD, ans, rd, disOA, disPA, disOB, disPB, disAB;
    cin >> pxD >> pyD >> axD >> ayD >> bxD >> byD;


    disAB = sqrt(pow(bxD - axD, 2) + pow(byD - ayD, 2)); // find the length of AB

    disOA = sqrt(pow(axD, 2) + pow(ayD, 2)); // find the length of OA
    disPA = sqrt(pow(axD - pxD, 2) + pow(ayD - pyD, 2)); // find the length of PA
    
    ans = max(disOA, disPA); // circle A covers both point.

    disOB = sqrt(pow(bxD, 2) + pow(byD, 2)); // find the length of OB
    disPB = sqrt(pow(bxD - pxD, 2) + pow(byD - pyD, 2)); // find the length of PB

    ans = min(ans, max(disOB, disPB)); // circle B covers both point.


    rd = max(max(disOA, disPB) , disAB/2); // A and B covers O and P respectivly
    ans = min(ans, rd); // circle A and B will intercect each other


    rd = max(max(disPA, disOB), disAB/2); // A and B covers P and O respectivly
    ans = min(ans, rd); // circle A and B will intercect each other

    cout << fixed << setprecision(6) << ans << endl;
}

int32_t main() {
    Faster;
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}

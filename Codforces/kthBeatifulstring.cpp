//codeforces.com/contest/1328/problem/B

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define fr(i, n) for(int i = 0; i < n; i++)
#define frr(i, n) for(int i = 1; i <= n; i++)

#define dbg(x) cout << #x << " = " << x << endl
#define all(x) x.begin(),x.end()
#define ms(x, i) memset(x, i, sizeof(x))

#define p(x) cout << x << "\n"
#define pv(x) fr(i, x.size()) cout << x[i] << " \n"[i==x.size()-1]

#define f first
#define s second

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f;

int main() {
    fastio;

    ll t;
    cin >> t;

    while (t--) {

        ll n, k;
        cin >> n >> k;

        ll cnt = 0ll;
        ll i1 = 1ll, i2;
        while (k > i1) {
            k -= i1;
            i1++; 
        }

        i2 = k-1;
        string ans;
        fr(i, n) {
            if (i == i1 || i == i2) ans += 'b';
            else ans += 'a';
        }

        reverse(all(ans));
        p(ans);
    }
}

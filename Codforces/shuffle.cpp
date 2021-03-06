//codeforces.com/contest/1366/problem/B

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

    int t;
    cin >> t;
    while (t--) {
        ll n, x, m;
        cin >> n >> x >> m;

        pll aux = {x,x};
        fr(i, m) {
            ll l,r;
            cin >> l >> r;

            if ((aux.f <= l && l <= aux.s) || (aux.f <= r && r <= aux.s)) {
                aux.f = min(aux.f, l);
                aux.s = max(aux.s, r);
            }

            if ((l <= aux.f && aux.f <= r) || (l <= aux.s && aux.s <= r)) {
                aux.f = min(aux.f, l);
                aux.s = max(aux.s, r);
            }
        } 

        ll ans = aux.s - aux.f + 1; 
        p(ans);
    }
}

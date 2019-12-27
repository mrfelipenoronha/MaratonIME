//codeforces.com/contest/1279/problem/C

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

int main(){
    fastio;

    int t;
    cin >> t;

    while (t--) {

        ll n, m;
        cin >> n >> m;

        ll pos[n+2];
        ll aux;
        frr(i, n) {
            cin >> aux;
            pos[aux] = i;
        }

        vi ord;
        fr(i, m) {
            cin >> aux;
            ord.pb(aux);
        }

        ll ans = 0ll, taken = 0ll, lst = -1;
        for (auto p: ord) {

            if (lst == -1) {
                lst = pos[p];
                ans += 2*(lst-1) + 1;
                taken++;
                continue;
            }

            if (pos[p] < lst) {
                taken++;
                ans++;
                continue;
            }

            lst = pos[p];
            taken++;
            ans += 2*(lst-taken) + 1;
        }

        p(ans);
    }
}
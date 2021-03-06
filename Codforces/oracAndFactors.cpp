//codeforces.com/contest/1350/problem/A

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

ll find_div(ll n) {

    for (ll i = 2; i*i <= n; i++) 
        if (n%i == 0) return i;
    
    return n;
}
int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        while (k && n%2) {
            n += find_div(n);
            k--;
        }
        n += k+k;
        p(n);
    }
}

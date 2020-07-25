//codeforces.com/contest/1380/problem/B

#include "bits/stdc++.h"
using namespace std;

#define f first
#define s second
#define pb push_back
#define fr(i, n) for(int i = 0; i < n; i++)
#define frr(i, n) for(int i = 1; i <= n; i++)
#define dbg(x) cout << #x << " = " << x << endl
#define all(x) x.begin(),x.end()
#define ms(x, i) memset(x, i, sizeof(x))
#define p(x) cout << x << "\n"
#define pv(x) fr(i, x.size()) cout << x[i] << " \n"[i==x.size()-1]
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long int ll;
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

        string s;
        cin >> s;

        vi cnt(3, 0);
        for (auto c: s) {
            if (c == 'R') cnt[0]++;
            if (c == 'P') cnt[1]++;
            if (c == 'S') cnt[2]++;
        }

        char h = 'P';
        if (cnt[1] == max({cnt[0], cnt[1], cnt[2]})) h = 'S';
        if (cnt[2] == max({cnt[0], cnt[1], cnt[2]})) h = 'R';

        fr(i,s.size()) cout << h;
        cout << endl;
    }
}

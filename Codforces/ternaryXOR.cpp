//codeforces.com/contest/1328/problem/C

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

        int n;
        cin >> n;

        string s;
        cin >> s;

        string a1, a2;
        bool tem = 0;
        fr(i, n) {

            if (s[i] == '2') {
                if (!tem) a1+='1', a2+='1';
                else a1+='0', a2+='2';
            }
            else if (s[i] == '1') {
                if (!tem) a1+='1', a2+='0', tem = 1;
                else a2+='1', a1+='0';
            }
            else a1 += '0', a2+='0';
        }

        p(a1);
        p(a2);
    }
}

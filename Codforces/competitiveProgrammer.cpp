//codeforces.com/contest/1266/problem/A

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

    int n;
    cin >> n;

    fr(i, n) {

        string s;
        cin >> s;
        
        int dont = 0;
        fr(i, s.size()) {
            if (s[i] == '0') {
                dont = 1;
                s[i] = '#';
                break;
            }
        }

        int sm = 0, has = 0;
        fr(i, s.size()) {

            if (s[i] == '#') continue;
            int c = s[i]-48;

            sm += c;
            has |= ((c%2)==0);
        }
        if (sm%3 == 0 && has && dont) p("red");
        else p("cyan");
    }
}
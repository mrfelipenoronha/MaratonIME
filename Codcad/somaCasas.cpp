// codcad.com/problem/53

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i++)
#define dbg(x) cout << #x << " = " << x << endl
#define p(x) cout << #x << endl
#define pv(x) for (auto u : x) cout << u << " \n"[u == *(x.end()-1)];

#define f first
#define s second

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
	fastio
	
	int n;
	cin >> n;

	vl v(n);
	fr(i, n) cin >> v[i];

	ll k;
	cin >> k;

	fr(i, n){
		if (binary_search(v.begin(), v.end(), k-v[i])){
			cout << min(v[i], k-v[i]) << " " << max(v[i], k-v[i]) << endl;
			return 0;
		}
	}
}

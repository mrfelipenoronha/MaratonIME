//codeforces.com/contest/1068/problem/A

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
		
	ll n, m, k, l;
	cin >> n >> m >> k >> l;

	if (m > n){
		p(-1);
		return 0;
	}

	ll aux = k+l;
	if (aux > n){
		p(-1);
		return 0;
	}

	ll ans = aux/m;
	if (aux%m > 0) ans++;

	if (ans*m > n){
		p(-1);
		return 0;
	}
	
	cout << ans << endl;
}

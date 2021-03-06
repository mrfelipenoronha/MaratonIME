// codeforces.com/contest/1107/problem/B

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i++)

#define dbg(x) cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()

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

ll dr(ll x){
	x = (1ll + (x-1ll)%9ll);
	if (x < 10) return x;
	return (dr(x));
}

int main(){
	fastio
	
	int n;
	cin >> n;

	while (n--){

		ll k, x;
		cin >> k >> x;

		if (x < 9) k--;
		k *= 9ll;

		while (dr(k) != x) k++;

		cout << k << endl;
	}
}

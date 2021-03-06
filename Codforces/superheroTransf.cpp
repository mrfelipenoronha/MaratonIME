//codeforces.com/contest/1111/problem/A

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

string v = "aeiou";

bool isv(char l){
	fr(i, 5) if (l == v[i]) return true;
	return false;
}

int main(){
	fastio
	
	string s, t;
	cin >> s >> t;

	if (s.length() != t.length()){
		p(No);
		return 0;
	}

	
	fr(i, s.length()){

		if (isv(s[i]) != isv(t[i])) {
			p(No);
			return 0;
		}
	}
	p(Yes);
}

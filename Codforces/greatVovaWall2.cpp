// https://codeforces.com/contest/1092/problem/D2

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define mp make_pair
#define priority_queue pq
#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i++)
#define dbg(x) cout << #x << " = " << x << endl

#define f first
#define s second

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main(){
	fastio
	
	int n;
	cin >> n;

	int mx = -1;
	stack<int> s;
	fr(i, n){
		int x;
		cin >> x;
		mx = max(mx, x);

		if (s.empty()) s.push(x);
		else{
			int v = s.top();

			if (x > v){
				cout << "NO" << endl;
				return 0;
			}

			if (x == v) s.pop();
			else s.push(x);
		}

	}

	if (s.size() == 0 || (s.size() == 1 && s.top() == mx)) cout << "YES" << endl;
	else cout << "NO" << endl;
}

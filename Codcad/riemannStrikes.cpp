// codcad.com/problem/100

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

vector<int> isPrime(1300009, true); 
vector<int> prime; 
vector<int> SPF(1300009); 
int pos[1300009];
  
void seive(int n = 1300009) 
{ 
  isPrime[0] = isPrime[1] = false; 

  for (int i = 2; i < n; i++){ 
    if (isPrime[i]){ 
        prime.push_back(i); 
        SPF[i] = i; 
    } 

    for (int j = 0; 
         j < (int)prime.size() && 
         i*prime[j] < n && prime[j] <= SPF[i]; 
         j++) 
    { 
        isPrime[i*prime[j]] = false; 
        SPF[i*prime[j]] = prime[j] ; 
    } 
  } 
} 

int main(){
	fastio
	
	int n;
	cin >> n;

	seive();
   
    fr(i, prime.size()) pos[prime[i]] = i+1;

    fr(i, n){
        int q;
        cin >> q;

        cout << pos[q] << endl;
    }
}

#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()



const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=1e5+5;

#define SIEVE
int primes[N];
vector<int> pr;
void sieve(){
	for(int i=2;i<N;i++){
		if(primes[i]==0){
			pr.pb(i);
			for(int j=i*i;j<N;j+=i){
				primes[j]=1;
			}
		}
		primes[i]^=1;
	}
}

void solve(){
	int d;
	cin >> d;
	int x = *upper_bound(all(pr),d);
	int y = *upper_bound(all(pr),x + d - 1);
	cout << x * y << "\n";
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	#ifdef SIEVE
		sieve();
	#endif
	
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}

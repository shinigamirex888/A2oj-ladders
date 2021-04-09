#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const int M=1e9+7;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }

int main(){
    int t;
    cin>>t;
    while(t--){
       
	int n; cin >> n;
        vector<pair<int, int>> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i].first >> a[i].second;
        vector<int> tm(n + 1);
        for (int i = 1; i <= n; ++i) cin >> tm[i];;
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans += a[i].first - a[i - 1].second + tm[i];
            if (i < n) ans = max(a[i].second, ans + (a[i].second - a[i].first + 1) / 2);
        }
        cout << ans << "\n";
       
    }

    return 0;
}
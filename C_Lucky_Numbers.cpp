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
     int n;
            cin>>n;
            ll ans=0;
            ll k=2;
            for(int i=1;i<=n;i++){
                ans+=(k);
                k=k*2LL;
            }
            cout<<ans;
    return 0;
}
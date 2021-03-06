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
     ll modPow(ll a, ll b){
            if(b==0)
                return 1LL;
            if(b==1)
                return a%M;
            ll res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }
    const int N=2e5+2;
        int fact[N];

        void precalc(){
            fact[0]=1;
            for(int i=1;i<N;i++){
                fact[i]=mul(fact[i-1],i);
            }
        }

        ll inv(ll x){
            return modPow(x,M-2);
        }

        ll divide(ll a, ll b){
            return mul(a,inv(b));
        }

        ll nCr(ll n, ll r){
            return divide(fact[n],mul(fact[r],fact[n-r]));
        }
    
int main(){
   int n,k;
            cin>>n>>k;
            vector<int>a(n);
            for(int i=0;i<n;i++)
                cin>>a[i];
            vector<int>b;
            ll total=0;
            int x=n;
            int cc=0;
            while(1){
                total+=x;
                x--;
                cc++;
                if(cc>=k)
                    break;
            }
            int other=n-k+1;
            for(int i=0;i<n;i++){
                if(a[i]>=other)
                    b.push_back(i);
            }
            sort(b.begin(),b.end());
            ll total_ways=1;
            for(int i=0;i<(int)b.size()-1;i++){
                total_ways=mul(total_ways,((ll)b[i+1]-b[i]));
            }
            cout<<total<<" "<<total_ways;

    return 0;
}
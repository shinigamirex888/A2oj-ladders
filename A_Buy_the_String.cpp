#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
//const int M=1e9+7;
    
    
        // const int M=1e9+7;
        const int M=998244353;
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

    int main(){
        int t;
        cin>>t;
        while(t--){
           int n,c0,c1,h;
            string s;
            cin>>n>>c0>>c1>>h>>s;
            int zero=0,one=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0')
                    zero++;
                else 
                    one++;
            }
            int ans=(zero*c0)+(one*c1);
            int ans0=(one*h)+(n*c0);   // all 1 convert to 0
            int ans1=(zero*h)+(n*c1);  // all 0 convert to 1
            cout<<min(ans,min(ans0,ans1))<<endl;

        }


        return 0;
    }
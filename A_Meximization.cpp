#include <bits/stdc++.h>
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
            int t;
            cin>>t;
            while(t--){
                int n;
                cin>>n;
               int arr[n];
               map<int,int>mp;
               for(int i=0;i<n;i++){
                   cin>>arr[i];
                   mp[arr[i]]++;
               }
                vector<int>v;
                vector<int>v2;
                for(auto it : mp){
                    if(it.second >0){
                        v.push_back(it.first);
                    }
                }
                sort(v.begin(),v.end());
                for(auto it : mp){
                    if(it.second>1){
                        v2.push_back(it.first);
                        
                    }
                }
                for(auto it: mp){
                    if(it.second>1){
                        int y=it.second-1;
                        while(y--){
                            v.push_back(it.first);
                        }
                    }
                }
                for(int x: v){
                    cout<<x<<" ";
                } 

                cout<<endl;
            }

            return 0;
        }
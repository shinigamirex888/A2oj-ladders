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
    stack<int>s;
    int n;
    cin>>n;
    int arr[n];
    int oneC=0;
    for(int i=0;i<n;i++){
       cin>>arr[i];
        if(arr[i]==1){
            oneC++;
        }
    }
    if(oneC==0){
        cout<<0;
        return 0;
    }
    if(oneC==1){
        cout<<1;
        return 0;
    }
    ll ans=1;
            for(int i=0;i<n;i++){
                if(arr[i]==1){
                    if(!s.empty()){
                        ll dist=i-(s.top());
                        ans*=((ll)dist);
                    }
                    s.push(i);
                }
            }
            cout<<ans;


    return 0;
}
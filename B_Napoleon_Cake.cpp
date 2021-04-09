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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int temp=arr[n-1];
        int ans[n]={0};
        for(int i=n-1;i>=0;i--){
            if(temp!=0 || arr[i]!=0){
                ans[i]=1;
                temp=max(temp,arr[i]);
                temp--;
        }
        }
        for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
        cout<<endl;

    
    }
    return 0;
}
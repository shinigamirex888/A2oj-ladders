#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    int n,a,b,c,dp[4001]={0};
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++){
        if(!dp[i] && i)
            continue;
        if (i+a<=n){
            dp[i+a]=max(dp[i+a],dp[i]+1);
        }
        if (i+b<=n){
            dp[i+b]=max(dp[i+b],dp[i]+1);
        }
        if (i+c<=n){
            dp[i+c]=max(dp[i+c],dp[i]+1);
        }
    }
    cout<<dp[n];
    return 0;
}
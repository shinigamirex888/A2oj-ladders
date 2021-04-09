# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    ll n,m,k,ans,a[111111];

    cin>>n>>m;
    ans=INF;
    for(ll i=1;i<=m;i++)
        cin>>a[i];
    sort(a+1,a+m+1);
    for(ll i=n;i<=m;i++)
        ans=min(ans,a[i]-a[i-n+1]);
    cout<<ans;
}
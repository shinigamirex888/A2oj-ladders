# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
  ll l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    ll lowerbound=min(r1,r2),upperbound=max(l1,l2);
    ll ans=lowerbound-upperbound+1;

    if(k>=max(l1,l2) && k<=min(r1,r2))
        --ans;
    cout<<max((ll)0,ans)<<endl;
    return 0;       
}
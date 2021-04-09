#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    ll len;
    cin>>len;
    if(len%2 !=0){
        cout<<0;
        return 0;
    }
    len=len/2;
    ll ans=len-1;
    if(len%2==0){
        ans--;
    }
    cout<<ans/2;

    return 0;
}
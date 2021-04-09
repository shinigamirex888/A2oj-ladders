#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll ra,rb,rc;
        ra=a-(p%a);
        if(ra==a){
            ra=0;
        }
        rb=b-(p%b);
        if(rb==b){
            rb=0;
        }
        rc=c-(p%c);
        if(rc==c){
            rc=0;
        }
        ll ans=min(ra,min(rb,rc));
        cout<<ans<<endl;

    }







    return 0;

}
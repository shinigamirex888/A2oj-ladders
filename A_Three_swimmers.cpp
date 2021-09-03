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
       ll x=((p+a-1)/a);
       ll y=((p+b-1)/b);
       ll z=((p+c-1)/c);
       cout<<min({(x*a)-p,(y*b)-p,(z*c)-p})<<endl;

    }







    return 0;

}
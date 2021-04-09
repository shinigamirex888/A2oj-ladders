#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll u,v,a,s;
        cin>>u>>v>>a>>s;
        ll ans=0;
        ans=u*u-(2*a*s);
        if(ans<=v*v){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }


    return 0;
}
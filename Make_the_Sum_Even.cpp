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
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0){
            cout<<0<<endl;
            }
        else{
            ll ans=0;
            for(ll i=0;i<n;i++){
                if((arr[i]%2==0)&& ((arr[i]+1)/2-1<=0)){
                    ans=1;
                    break;
                }
            }
            if(ans==0){
                cout<<-1<<endl;
            }else{
                cout<<1<<endl;
            }
        }    

        }
    return 0;
}
#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=0;
        ll temp=0;
        for(ll i=0;i<n;i++){
            if(arr[i]>i+1){
                temp=1;
                break;
            }
                ans+=(i+1-arr[i]);
            
        }
        if(temp==1){
            cout<<"Second"<<endl;
        }else{
            if(ans%2==1){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        
    }


    return 0;
}
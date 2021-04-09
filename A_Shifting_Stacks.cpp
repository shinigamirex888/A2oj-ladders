#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
void solution(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll extra=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>=i){
            extra+=(arr[i]-i);
        }
        else if(arr[i]+extra>=i){
            extra-=(i-arr[i]);
        }
        else{
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
}
                
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        
        solution();
    }
    return 0;
} 

                

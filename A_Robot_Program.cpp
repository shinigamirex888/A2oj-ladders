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
        int x,y;
        cin>>x>>y;
        int mini=min(x,y);
        int ans=2*mini;
        int rem=abs(x-y);
        if(rem==0){
            cout<<ans<<endl;
            continue;
        }
        
        
        ans+=(2*rem)-1;
        cout<<ans<<endl;

    }

    return 0;
}
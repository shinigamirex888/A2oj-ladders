#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
        const int M=1e9+7;

        int main(){
            ll n;
            cin>>n;
            ll arr[n];
            for(ll i=0;i<n;i++){
                cin>>arr[i];
            }
            ll maxSum=0;
            vector<ll>v;
            for(int ll i=0;i<n;i++){
                if(arr[i]>=0){
                    v.push_back(arr[i]);
                    maxSum+=arr[i];
                }
            }
            cout<<maxSum<<" "<<v.size();


            return 0;
        }
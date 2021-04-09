#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

bool compare(pair<int,int>a,pair<int,int>b){
    return b.second>a.second;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll N,X;
        cin>>N>>X;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<N;i++){
            int s,r;
            cin>>s>>r;
            v.push_back({s,r});
        }
         vector<ll>vi;
        for(ll i=N-1;i>=0;i--){
            if(v[i].first<=X){
                vi.push_back(v[i].second);
            }
        }
        sort(vi.begin(),vi.end());
        ll bb=vi.size();
        cout<<vi[bb-1]<<endl;


    }


    return 0;
}
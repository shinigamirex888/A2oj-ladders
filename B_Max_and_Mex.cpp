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
       int n,k;
       cin>>n>>k;
       vector<ll>v(n);
       set<ll>st;
       for(int i=0;i<n;i++){
           cin>>v[i];
           st.insert(v[i]);
       }
       sort(v.begin(),v.end());
       ll mex=-1;
       for(int i=0;i<n;i++){
           if(v[i]!=i){
               mex=i;
               break;
           }
       }
       if(mex==-1){mex=n;}
       int sum=(mex+v[n-1]+1)/2;
       if(mex==n || k==0){
           cout<<(int)st.size()+k<<endl;
       }
       else{
           st.insert(sum);
           cout<<(int)st.size()<<endl;
       }
    }
    return 0;
}
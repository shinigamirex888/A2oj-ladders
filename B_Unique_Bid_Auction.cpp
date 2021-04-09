#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

 void solve(){
            int n;
            cin>>n;
            map<int,int>mp;
            vector<int>a(n);
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                a[i]=x;
                mp[x]++;
            }
            for(auto i : mp){
                if(i.second==1){
                    for(int j=0;j<n;j++){
                        if(a[j]==i.first){
                            cout<<j+1<<"\n";
                            return;
                        }
                    }
                }
            }
            cout<<-1<<"\n";
        }

        int main(){
          
            int t=1;
            cin>>t;
            while(t--){
            
                solve();
            }
            return 0;
        }

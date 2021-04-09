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
       int n,m;
       cin>>n>>m;
       string s;
       cin>>s;
       string a="",b="";
       if(n<(2*m)+1){
           cout<<"NO"<<endl;
           continue;
       }
       for(int i=0;i<m;i++){
           a+=s[i];
       }
       for(int i=n-1;i>=n-m;i--){
           b+=s[i];
       }
       if(a==b){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }


    return 0;
}
#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    int k,l,m,n,d;
     cin>>k>>l>>m>>n>>d;
    int ans=0;
    for (int i=1; i<=d;++i) {
        if(i%k == 0 || i%l ==0 || i%m ==0 || i%n ==0) ans++;
    }
 
    cout<<ans<<"\n";

    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans=a+b+c;
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    ans=max(ans,a*b*c);
    cout<<ans<<endl;


    return 0;
}
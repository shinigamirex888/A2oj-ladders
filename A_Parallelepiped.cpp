# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    ll s1,s2,s3,ans;
    cin>>s1>>s2>>s3;
    ll a,b,c;
    a=sqrt((s1*s3)/s2);
    b=sqrt((s1*s2)/s3);
    c=sqrt((s2*s3)/s1);
    ans=a+b+c;
    ans*=4;
    cout<<ans<<endl;


    return 0;
}
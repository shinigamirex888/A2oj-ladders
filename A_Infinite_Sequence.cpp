# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==0){
        if(a==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        if((b-a)%c==0 && (b-a)/c>=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
            }
    }


    return 0;
}
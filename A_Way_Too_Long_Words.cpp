#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string ss;
        cin>>ss;
        int len=ss.size();
        if(len<=10){cout<<ss<<endl;}else{
        cout<<ss[0]<<len-2<<ss[len-1]<<endl;}
    }




    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    vector<pair<int,int>>v(t);
    for(int i=0;i<v.size();i++){
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i].first==v[j].second){count++;}
        }
    }
    cout<<count<<endl;




    return 0;
}
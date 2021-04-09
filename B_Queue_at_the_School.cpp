# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int i=0;i<n;i++){
            if(s[i]=='B'&& s[i+1]=='G'){
                char x=s[i];
                s[i]=s[i+1];
                s[i+1]=x;
                i++;
            }
        }
    }
    cout<<s;




    return 0;
}
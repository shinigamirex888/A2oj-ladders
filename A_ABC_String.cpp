# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    int t;
    string s;
    string ans;
    cin>>t;
    while(t--){
        cin>>s;
        int len=s.size();
        if(s[0]==s[len-1]){cout<<"NO"<<endl;
        return 0;}
        int countS=1;
        int countE=1;
        for(int i=1;i<len;i++){
            if(s[i]==s[0]){countS++;}
            }
        for(int i=len-2;i>=0;i--){
            if(s[i]==s[len-1]){countE++;}
            }
        int sum=countS+countE;
        if((len-sum)%2!=0){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}




    }


    return 0;
}
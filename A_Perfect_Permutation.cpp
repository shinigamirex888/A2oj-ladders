#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n+1];
    p[0]=(-1);
    for(int i=1;i<n+1;i++){
        p[i]=i;
    }
    for(int i=1;i<n+1;i+=2){
        swap(p[i],p[i+1]);
    }
    if(n%2!=0){
        cout<<p[0];
    }else{
        for(int i=1;i<n+1;i++){
            cout<<p[i]<<" ";
        }
    }

    return 0;
}
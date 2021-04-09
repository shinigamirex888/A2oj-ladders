#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int i=0;
    while(m-i>=0){
        m-=i;
        if(i!=n){i++;}
        else{
            i=1;
        }
    }
    cout<<m;

    return 0;
}
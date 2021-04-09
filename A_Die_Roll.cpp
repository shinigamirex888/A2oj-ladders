# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}

int main(){
    int x,y;
    cin>>x>>y;
    int tar=max(x,y);
    int res=6-tar+1;
    cout<<res/gcd(6,res)<<"/"<<6/gcd(6,res);    


    return 0;
}
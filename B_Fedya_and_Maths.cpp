# include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define INF 2000000000
using namespace std;

int main(){
ll n;
cin>>n;
int ans=(pow(1,(n%4))+pow(2,(n%4))+pow(3,(n%4))+pow(4,(n%4)))%5;
cout<<ans;


    return 0;
}
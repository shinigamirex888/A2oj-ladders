# include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define INF 2000000000
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll sum = n * (n+1) / 2;
    for (int i = 1; i <= n; i *= 2)
        sum -= 2 * i;
    cout<<sum<<endl;    
    }



    return 0;

}
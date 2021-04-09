#include <bits/stdc++.h>
# include <iostream>
# include<utility>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
     int t;
       cin >> t;
       while (t--)
       {
              int k,n;
              cin >> n >> k;
              vector<int> ans ; 
              for(int i =  k + 1; i <= n; ++ i)ans.push_back(i) ;
              for(int i = (k + 1) / 2; i < k; ++ i)ans.push_back(i) ;
              cout<< ans.size() <<endl ;
              for(auto u : ans)cout<< u <<" " ;cout<< endl ;
       }


    return 0;
}
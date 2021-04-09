// Striver cp list Linear Search

#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;


int main(){
 int n;
    cin>>n;
    int a[n];
for(int i=0;i<n;i++){
        cin>>a[i];}
int k;
cin>>k;
for(int i=0;i<n;i++){
if(k==a[i]){
            cout<<i;
            return 0;
            }
 }
}
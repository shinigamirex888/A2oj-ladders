#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
void solution(){
    int n;
    cin>>n;
    vector<ll>arr(n+5);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>=i){
            arr[i+1]+=arr[i]-i;
            arr[i]=i;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
                
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        
        solution();
    }
    return 0;
} 

                

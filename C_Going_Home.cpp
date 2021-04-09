#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const int M=1e9+7;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }

    void findPairs(int arr[], int n) 
{ 
     
    map<int, pair<int, int> > Hash; 
    for (int i = 0; i < n; ++i) 
    { 
        for (int j = i + 1; j < n; ++j) 
        { 
            
            int sum = arr[i] + arr[j]; 
            if (Hash.find(sum) == Hash.end()) 
                Hash[sum] = make_pair(i, j); 
  
            else 
            { 
                 
                pair<int, int> pp = Hash[sum];
  
               
                cout<<"YES"; 
            } 
        } 
    } 
  
    cout << "NO";  
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    findPairs(arr,n);

    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    int N,H,x;
    cin>>N>>H>>x;
    cout<<endl;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int remTime=H-x;
    for(int i=0;i<N;i++){
        if(arr[i]>=remTime){
            cout<<"YES";
            return 0;
        }
        
    }
    cout<<"NO";


    return 0;
}
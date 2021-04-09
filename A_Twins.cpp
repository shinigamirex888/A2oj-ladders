# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum,mySum=0,rem=0,count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    for(int i=0;i<n;i++){
        mySum+=arr[i];
        rem-=arr[i];
        count++;
        if(mySum>rem){
            cout<<count<<endl;
            break;
        }

    }*/
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int ans=0,mySum=0;
    for(int i=n-1;i>=0;i--){
        mySum+=arr[i];
        ans+=1;
        if(mySum>sum-mySum){
            cout<<ans;
            break;
        }
    }

    







    return 0;
}
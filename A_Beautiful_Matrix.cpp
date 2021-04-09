# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int arr[6][6];
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>arr[i][j];
                         
    }
}
pair<int,int>pos;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(arr[i][j]==1){
            pos.first=i;
            pos.second=j;
        }
                         
    }
}
int ans=0;
ans+=abs(3-pos.first);
ans+=abs(3-pos.second);
cout<<ans;




    return 0;
}
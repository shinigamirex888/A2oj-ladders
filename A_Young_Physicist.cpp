# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Force{
    int x,y,z;
};

int main(){
int t;
cin>>t;
Force arr[t];
int xsum=0,ysum=0,zsum=0;
for(int i=0;i<t;i++){
    cin>>arr[i].x>>arr[i].y>>arr[i].z;
    xsum+=arr[i].x;
    ysum+=arr[i].y;
    zsum+=arr[i].z;
}
if(xsum==0 && ysum==0 && zsum==0){
    cout<<"YES";
}else{
cout<<"NO";
}




    return 0;
}
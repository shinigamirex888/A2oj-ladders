
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    
    int t;
    cin>>t;
    while(t--)
    {
    int a[4];
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    
    int ans1=max(a[0],a[1]);
    int ans2=max(a[2],a[3]);
sort(a,a+4);
if((ans1==a[2] && ans2==a[3]) || (ans1==a[3] && ans2==a[2])){
    cout<<"YES"<<"\n";
}else{
    cout<<"NO"<<"\n";
}
}
    return 0;
}
 



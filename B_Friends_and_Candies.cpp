#include <bits/stdc++.h>
using namespace std;	        
int main()
{ 
    int t=1;
    cin>>t;
    while(t--)
    {
     int n;
    cin>>n;
    int arr[n];
    int res=0; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        res+=arr[i];
    }
        if(res%n!=0){
        cout<<-1<<endl;
        continue;
    }
    
    res=res/n; 
    
    int ans=0; 
    for(int i=0;i<n;i++){
        if(arr[i]>res) ans++; 
    }
    cout<<ans<<endl;
}
    return 0;
}
 




#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll Gcd(ll a, ll b)
{
    if (b > a)
    {
        return Gcd(b, a);
    }
    if (b == 0)
        return a;
    else
        return Gcd(b, a % b);
}

int main()
{ 
    
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v1;
    vector<int>v2;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            v1.pb(a[i]);
        }
    }
    sort(v1.begin(),v1.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            v2.pb(a[i]);
        }
    }
    vector<int>v;
    for(int i=0;i<v1.size();i++){
        v.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        v.push_back(v2[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(Gcd(v[i],2*v[j])>1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
    return 0;
}
 



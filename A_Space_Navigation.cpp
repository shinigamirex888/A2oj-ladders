#include<bits/stdc++.h>
#define mod 1000000007;
#define pb push_back;
#define ff first;
#define ss second;
#define pa pair<int,int>;
#define vi vector<int>;
#define vii vector<pa>;
#define ll long long int;
#define INF 1000000000;

const double PI=3.141592653589793238460;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int u=0,l=0,d=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U'){u++;}else if(s[i]=='L'){l++;}
            else if(s[i]=='D'){d++;}else{
                r++;
            }
            
        }
        if(a>=0 && b>=0){
            if(r>=a && u>=b){cout<<"YES"<<endl;;}else{cout<<"NO"<<endl;}
        }else if(a>=0 && b<0){
            if(r>=a && d>= -b){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
        }else if(a<0 && b>=0){
            if(l>= -a && u>=b ){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
        }else{
            if(l>= -a && d>= -b){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
        }
    }


    return 0;
}
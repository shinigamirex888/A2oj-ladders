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
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='a') s[i]='b';
                else s[i]='a';
            }
            else{
                if(s[i]=='z') s[i]='y';
                else s[i]='z';
            }
        }
        cout<<s<<endl;
    }





    return 0;
}
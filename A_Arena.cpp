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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int winners=0;
        for(int i=n-1;i>1;i--){
            if(arr[i]>arr[i-1]){
                winners++;
            }else if(arr[i-1]==arr[i]){
                if(arr[i-2]<arr[i]){
                    winners++;
                }
            }
        }
        if(arr[1]>arr[0]){winners++;}
        cout<<winners<<endl;
    }





    return 0;
}
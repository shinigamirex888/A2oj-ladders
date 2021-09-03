#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n][m];
        if(n==m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i%2==0){
                        if(j%2==0){
                            a[i][j]='R';
                        }else{
                            a[i][j]='L';;
                        }
                    }else{
                        if(j%2==0){
                            a[i][j]='L';
                        }else{
                            a[i][j]='R';;
                        }
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        auto itr=0;
         while (itr<s.length())
        {
        itr = s.find("party", itr );
        if(itr<s.length())
        {
s[itr+2]='w';
s[itr+3]='r';
s[itr+4]='i';
itr+= 5;
        }
     }
     cout<<s<<endl;
     


    }


    return 0;
}
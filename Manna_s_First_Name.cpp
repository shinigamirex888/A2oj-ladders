#include <bits/stdc++.h>
        #include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int suvo=0;
        int suvojit=0;
        auto itr=0;
        auto itr1=0;
        while (itr<s.length())
        {
        itr = s.find("SUVO", itr );
        if(itr<s.length())
        {
suvo++;
itr+= 4;
        }
     }
        while (itr1<s.length())
        {
        itr1 = s.find("SUVOJIT", itr1 );
        if(itr1<s.length())
        {
suvojit++;
itr1+= 7;
        }
     }
cout<<"SUVO = "<<suvo-suvojit<<", "<<"SUVOJIT = "<<suvojit<<endl;
    }
}
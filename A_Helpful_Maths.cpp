# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   string str;
    cin >> str;
 
    int n = str.size();
 
    for (int i = 0; i < n; i += 2)
    {
        for (int j = i + 2; j < n; j += 2)
        {
            if (str[i] > str[j])
            {
                swap(str[i], str[j]);
            }
        }
    }
 
    cout << str << "\n";
 
    return 0;
}


 /*string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            s.erase(i,1);
            i--;
        }
    }
    sort(s.begin(),s.end());
    for(int i=1;i<s.size();i=i+2)
    {
        s.insert(i,"+");
    }
    cout<<s<<endl;
	
	return 0;*/
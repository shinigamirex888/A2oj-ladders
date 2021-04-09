# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   int j = 0; int p = 0;
	string s, s2 = "hello";
	cin >> s;
	for(int i = 0;i < s.size();i++) {
		if(s2[j] == s[i]) {
			j++;
			p++;
		}
		if(p == 5) {
			break;
		}
	}
	if(p == 5) {
		cout <<"YES";
	}
	else {
		cout <<"NO";
	}
}
 /*string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int h=mp['h'],e=mp['e'],l=mp['l'],o=mp['o'];
    //if(h>1 && e>1 && l>2 && o>1){
      //  cout<<"YES";
   // }
     if(h>=1 && e>=1 && l>=2 && o>=1 && s.size()>5){
            cout<<"YES";
        }
    else{
        cout<<"NO";
    }



    return 0;*/
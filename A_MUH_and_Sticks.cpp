#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
    vector<int> l(6);
	for (int i = 0 ; i < 6 ; i++) cin >> l[i];
	sort(l.begin(), l.end());
	
	int lLeg = l[3];
	int nLegs = 0;
	for (int i = 0 ; i < 6 ; i++) if (l[i] == lLeg) nLegs++;
 
	if (nLegs < 4) {
		cout << "Alien";
		return 0;
	}
 
	for (int i = 0 ; i < 6 && l.size() > 2 ; i++)
		if (l[i] == lLeg) {
			l.erase(l.begin() + i);
			i--;
		}
 
	if (l[0] == l[1]) cout << "Elephant";
	else cout << "Bear";

    /*unordered_map<int,int>mpp;
    vector<int>vi;
    set<int>st;
    int arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    for(int u: arr){st.emplace(u);}
    if(st.size()!=3){
        cout<<"Alien";
        return 0;
    }
    for(int i=0;i<6;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second==1){
            vi.push_back(it.first);
        }
    }
    int n1=vi.size();
    if(vi[0]==vi[1]){
        cout<<"Elephant";
    }else{
        cout<<"Bear";
    }*/





    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
char toLower(char a){
    if(a>='A' && a<='Z'){
        a+=32;
    }
    return a;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int s1=str1.size();
    int s2=str2.size();
    for(int i=0;i<s1;i++){
        toLower(str1[i]);
    }
    for(int i=0;i<s2;i++){
        toLower(str2[i]);
    }
    cout<<str1.compare(str2)<<endl;








    return 0;
}
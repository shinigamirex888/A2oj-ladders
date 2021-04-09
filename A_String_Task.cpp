# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isVowel(char ch){
    if(ch>='A' && ch<='Z'){
        ch+=32;
    }
    return ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u' || ch=='y';
}

char lower(char ch){
    if(ch>='A' && ch<='Z'){
        ch+=32;
    }
    return ch;
}

int main(){
    string ss;
    cin >> ss;
    for (int i = 0; i < ss.length(); i++)
        if (isVowel(ss[i]) == false)
            cout << "." << lower(ss[i]);



    return 0;
}


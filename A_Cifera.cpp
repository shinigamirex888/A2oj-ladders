# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
   int k, l, v = -1;
    cin >> k >> l;
    while (l % k == 0)
    {
        l /= k;
        v++;
    }
    if (l == 1) cout << "YES\n" << v;
    else cout << "NO";


    return 0;
}
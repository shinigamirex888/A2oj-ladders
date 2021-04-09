# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   int n, m;
	while (cin >> n >> m) {
		int cur = 1;
		ll ans = 0;
		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			if (x >= cur) {
				ans += x - cur;
				cur = x;
			} else {
				ans += x + n - cur;
				cur = x;
			}
		}
		cout << ans << endl;
	}


    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
   
	int n;
	cin >> n;
 
	int count = n / 2;
 
	cout << count << endl;
 
	for (int i = 0; i < count - 1; i++)
	{
		cout << 2 << ' ';
	}
 
	if (n & 1)
	{
		cout << 3 << endl;
	} else {
		cout << 2 << endl;
	}
 
    return 0;
}
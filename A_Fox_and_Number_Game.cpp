# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int gcd2(int  arr[], int   n) 
{ 
	int  result = arr[0]; 
	for (int i = 1; i < n; i++) 
	{ 
		result = gcd( arr[i], result); 
 
		if(result == 1) 
		{ 
		return 1; 
		} 
	} 
	return result; 
} 

int main(){
    int  n;
	cin>>n;
	int  a[n],j,k;
	for(int i=0; i<n; i++){
		cin>>a[i];
		
	}
	cout<<n*(gcd2(a, n))<<endl;


    return 0;
}
# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
     int n, shortest = INT_MAX, tallest = INT_MIN, sindex = -1, tindex = -1;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        if(temp > tallest)
        {
            tallest = temp;
            tindex = i;
        }
        if(temp<= shortest)
        {
            shortest = temp;
            sindex = i;
        }
    }
 
    int ans = tindex-1 + n-sindex;
    if(tindex > sindex)
        ans--;
    cout<<ans;
    



    return 0;
}
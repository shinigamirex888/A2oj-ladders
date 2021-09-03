#include <bits/stdc++.h> //yaad rkhne layak baatein
#include <bits/stdc++.h> // bool found = false use it to find some number after the given number with some cond.
                         // while (!found)
#include <iostream>      // freq.table-> int freq[26] = {0}; for (ll i = 0; i < s1.length(); i++) freq[s1[i] - 'A']++;
#define ll long long     //[s[i] - 'a'] ->this convers char to corr.int eg. 'c' to 3.
using namespace std;


int main()
{
  
    int t;
    cin>>t;
    int arr[102];
    arr[0]=1;
    for(int i=1;i<101;i++)
    arr[i]=arr[i-1]*i;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
        
    }
}


#include <bits/stdc++.h> //yaad rkhne layak baatein
#include <bits/stdc++.h> // bool found = false use it to find some number after the given number with some cond.
                         // while (!found)
#include <iostream>      // freq.table-> int freq[26] = {0}; for (ll i = 0; i < s1.length(); i++) freq[s1[i] - 'A']++;
#define ll long long     //[s[i] - 'a'] ->this convers char to corr.int eg. 'c' to 3.
// if(a<=min1){
//         min2 = min1;
//         index2 = index1;
//         min1 = a;
//         index1 = i;         to find index of 2nd smallest element
//       }
//       else if(a<=min2){
//         min2 = a;
//         index2 = i;
//       }
#define INF 2000000000
#define pb push_back
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const int M = 1e9 + 7;
#define loop0(i, n) for (ll i = 0; i < n; i++)            //  str.insert(0, 5, '1'); => it will insert 1 five times in start of str.
#define loop00(i, n) for (ll i = 0; i <= n; i++)
#define loop1(i, n) for (ll i = 1; i < n; i++)
#define loop11(i, n) for (ll i = 1; i <= n; i++)
#define loopab(i, a, b) for (ll i = a; i <= b; i++)

#define IM        LLONG_MAX
#define Im        LLONG_MIN
#define mod 1000000007

ll   arr[100001] = {0};
void do_it(ll n, ll k){
        arr[0] = 1;
        arr[1] = k;
        for(ll i=2; i<=n; i++){
                arr[i] = (arr[i-1]*k)%mod;
        }
}

void solve(){

        ll n, k;       cin >> n >> k;
        do_it(n, k);
        string str;     cin >> str;
        ll cnt = 0;
        for(ll i=0; i<(n+1)/2; i++){
                ll temp = str[i] - 'a';
                cnt = (cnt+(temp*(arr[(n+1)/2-i-1]))%mod)%mod;
        }
        bool judge = 1;
        string temp = str;
        for(ll i=0; i<(n+1)/2; i++){
                temp[n-i-1] = str[i];
        }

        if(temp<str) cnt = (cnt+1)%mod;
        cout << cnt << endl;
}


int main() {
        int test = 1;
        cin >> test;
        for(int i=1; i<=test; i++){
        cout << "Case #" << i << ": ";
            solve();
        }
}
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
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop00(i, n) for (ll i = 0; i <= n; i++)
#define loop1(i, n) for (ll i = 1; i < n; i++)
#define loop11(i, n) for (ll i = 1; i <= n; i++)
#define loopab(i, a, b) for (ll i = a; i <= b; i++)

void flashSpeed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}
ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}
const int N = 2e5 + 2;
int fact[N];

void precalc()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = mul(fact[i - 1], i);
    }
}

ll inv(ll x)
{
    return modPow(x, M - 2);
}

ll divide(ll a, ll b)
{
    return mul(a, inv(b));
}

ll nCr(ll n, ll r)
{
    return divide(fact[n], mul(fact[r], fact[n - r]));
}
double Round(double var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
ll ceils(ll x, ll y) {
	return x / y + ((x % y) != 0);
}
ll Gcd(ll a, ll b)
{
    if (b > a)
    {
        return Gcd(b, a);
    }
    if (b == 0)
        return a;
    else
        return Gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a / Gcd(a, b) * b;
}

bool isPal(string s)
{
    for (int i = 0; i < (int)s.size() / 2; i++)
    {
        if (s[i] != s[(int)s.size() - 1 - i])
            return false;
    }
    return true;
}

ll Sumdigits(ll a)
{
    ll total = 0;
    while (a)
    {
        total += a % 10;
        a /= 10;
    }
    return total;
}
bool isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++) {
        if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
}
bool isPowerOfTwo(int n){ 
   return (ceil(log2(n)) == floor(log2(n))); 
}
void lexosmallest(string s,string c){
    string t1 = s;
    sort(t1.begin(), t1.end());
    int index = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t1[i]) {
            index = i;
            break;
        }
    }
    int j;
    for (int i = 0; i < s.length(); i++) {        //khela yha pe hua hai..loop poora chala hai
        if (s[i] == t1[index])
            j = i;
    }
    swap(s[index], s[j]);
}
void solution(){
    int n;
    cin>>n;
    int cnt=0;
    string s;
   cin>>s;
   loop0(i,n){
       if(s[i]=='0'){
           cnt++;
       }
   }
    if(isPal(s)){
        if(cnt>1 && s[n/2]=='0' && n%2==1){
            cout<<"ALICE"<<endl;
        }else{
            cout<<"BOB"<<endl;
        }
        return;
    }
    if(cnt==2 && s[n/2]=='0' && n%2==1){   // when not palindrome then draw is only possible for exactly two zeroes and these conditions
        cout<<"DRAW"<<endl;
        return;
    }
    cout<<"ALICE"<<endl;
    return;    
    
}
    
 

int main()
{ 
    flashSpeed();
    int t;
    cin>>t;
    while(t--)
    {
    solution();
}
    return 0;
}
 



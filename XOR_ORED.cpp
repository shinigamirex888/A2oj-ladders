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
#define all(x) (x).begin(), (x).end()
#define pb push_back
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const ll M = 1e9 + 7;
#define loop0(i, n) for (ll i = 0; i < n; i++) //  str.insert(0, 5, '1'); => it will insert 1 five times in start of str.
#define loop00(i, n) for (ll i = 0; i <= n; i++)
#define loop1(i, n) for (ll i = 1; i < n; i++)
#define loop11(i, n) for (ll i = 1; i <= n; i++)
#define loopab(i, a, b) for (ll i = a; i <= b; i++)
#define input(a, n) loop0(i, n) cin >> a[i];
#define sz(a) ((long long)(a).size())

void flashSpeed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
const int N = 2e5 + 2;
int fact[N];
double Round(double var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
ll ceils(ll x, ll y)
{
    return x / y + ((x % y) != 0);
} //Alternatively printing 1 and 0 in arr
ll Gcd(ll a, ll b)        //int fuck=1;
{                         //for(int i=0;i<n;i++){
    if (b > a)            //      arr[i][j]==fuck;
    {                     //      fuck=1-fuck;
        return Gcd(b, a); //  }
    }
    if (b == 0)
        return a;
    else
        return Gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
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
{ //two find no.of power of 2 in a number==>while(n%2==0){cnt++;n/=2}
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
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i == 0) && (n / i == i))
        {
            return true;
        }
    }
    return false;
}
bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
void lexosmallest(string s, string c)
{
    string t1 = s;
    sort(t1.begin(), t1.end());
    int index = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t1[i])
        {
            index = i;
            break;
        }
    }
    int j;
    for (int i = 0; i < s.length(); i++)
    { //khela yha pe hua hai..loop poora chala hai
        if (s[i] == t1[index])
            j = i;
    }
    swap(s[index], s[j]);
}
const int NN = 1e4 + 5;
#define SIEVE
int primes[NN];
vector<int> pr;
void sieve()
{
    for (int i = 2; i < NN; i++)
    {
        if (primes[i] == 0)
        {
            pr.pb(i);
            for (int j = i * i; j < NN; j += i)
            {
                primes[j] = 1;
            }
        }
        primes[i] ^= 1;
    }
}
const int mod2 = 998244353;
// Binary exp power
ll powerr(ll x, ll y, ll p = mod2)
{
    ll res = 1;
    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
ll solve(ll n)
{
}
#define fr(i, a, b) for (ll i = a; i < (b); ++i)
string dTB(int n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');
    if (loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
int bTD(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

void solution()
{
   vector<ll>v(33, 0);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        string s = dTB(a[i]);
        ll anss = 0;
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                v[anss]++;
            anss++;
        }
    }
    ll k = ceil(n / (double)2);
    string s = "";
    for (ll i = 32; i >= 0; i--)
    {
        if (v[i] >= k)
            s += "1";
        else
            s += "0";
    }
    ll x = bTD(s);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        a[i] = a[i] ^ x;
        ans |= a[i];
    }
    cout << x << " " << ans << endl;

}

int main()
{
    flashSpeed();
#ifdef SIEVE
    sieve();
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}

//Last Year's Substring
// while(true){
//         ll n1=n;
//         while(n1>0){
//             ll r=n1%10;
//             if(r!=0 && n%r !=0){
//                 break;
//             }
//             n1/=10;
//         }
//         if(n1==0){
//             return n;
//             break;
//         }
//         n++;
//     }
 ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] >= a[i])
            continue;
        else
            count++;
    }
    cout << count << endl;
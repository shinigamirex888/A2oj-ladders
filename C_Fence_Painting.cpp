#include <bits/stdc++.h> //yaad rkhne layak baatein
#include <bits/stdc++.h> // bool found = false use it to find some number after the given number with some cond.
                         // while (!found)
#include <iostream>      // freq.table-> int freq[26] = {0}; for (ll i = 0; i < s1.length(); i++) freq[s1[i] - 'A']++;
//#define ll long long    //[s[i] - 'a'] ->this convers char to corr.int eg. 'c' to 3.
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
#define int long long
#define f first
#define s second
#define INF 2000000000
#define all(x) (x).begin(), (x).end()
#define pb push_back
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const int M = 1e9 + 7;
#define loop0(i, n) for (int i = 0; i < n; i++) //  str.insert(0, 5, '1'); => it will insert 1 five times in start of str.
#define input(a, n) loop0(i, n) cin >> a[i];
#define szl(a) ((long long)(a).size())
#define vi vector<int>
void flashSpeed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  // ax +by=c
    cout.tie(NULL); //int t=n/2020;
} //if(n%2020<=t){
const int N = 2e5 + 2;
int fact[N];
double Round(double var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int ceils(int x, int y)
{
    return x / y + ((x % y) != 0);
} //Alternatively printing 1 and 0 in arr
int Gcd(int a, int b)     //int fuck=1;
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
int lcm(int a, int b)
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
int Sumdigits(int a)
{ //two find no.of power of 2 in a number==>while(n%2==0){cnt++;n/=2}
    int total = 0;
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
void lexosmaintest(string s, string c)
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
int powerr(int x, int y, int p = mod2)
{
    int res = 1; //map<int,int> mp;
    x = x % p;   // mp[a]++;
                 //mp[b]--;
    if (x == 0)  //in bith-death kind of ques.
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
int solve(int n)
{
}
typedef long double ld;
#define sz(x) (int)(x).size()
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define trav(a, x) for (auto &a : x)
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
#define ins insert         //see subsequence hate
//consider a>2b or not
void solution()
{
            
}

int32_t main()
{
    flashSpeed();
#ifdef SIEVE
    sieve();
#endif
    cout<<setprecision(9)<<fixed;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
//palindrome t[i]=t[n−i+1] i (1≤i≤n) or t[n-i-1] for 0
//min of all max %k =ceil of(x/n)
// ceil of a/b = floor of a+b-1/b
//(p[i-1]<p[i])!=(p[i]<p[i+1]) finding local minima or maxima
//string prr dono side move krna ho to median ke across khelo median =vector of position ka size/2;
#include <bits/stdc++.h> //yaad rkhne layak baatein
#include <bits/stdc++.h> // bool found = false use it to find some number after the given number with some cond.
                         // while (!found)
#include <iostream>      // freq.table-> int freq[26] = {0}; for (ll i = 0; i < s1.length(); i++) freq[s1[i] - 'A']++;
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
const int M = 1e9 + 7;
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
int countdigits(int a)
{
    int total = 0;
    while (a)
    {
        total++;
        a /= 10;
    }
    return total;
}

void sloution()
{
    int a, b, c;
    cin >> a >> b >> c;
    int z = 1;
    for (int i = 0; i < c - 1; i++)
    {
        z *= 10;
    }
    int currA = z, currB = z;
    while (countdigits(currA) != a)
    {
        currA *= 2;
    }
    while (countdigits(currB) != b)
    {
        currB *= 3;
    }
    // deb(__gcd(currA,currB));
    cout << currA << " " << currB << "\n";
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sloution();
    }
    return 0;
}

// **Another Approach!!!**
//   int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int x = 1;
//         for (int i = 0; i < c - 1; i++)
//         {
//             x *= 10;
//         }
//         int a1 = x, a2 = x;
//         for (int i = 0; i < a - c; i++)
//         {
//             a1 *= 10;
//         }
//         while (1)
//         {
//             if (countdigits(a2) == b)
//                 break;
//             a2 *= 3;
//         }
//         if (a1 == a2 and c == 1)
//         {
//             cout << a1 << " " << a2 + 1 << endl;
//         }
//         else
//             cout << a1 << " " << a2 << endl;
//     }

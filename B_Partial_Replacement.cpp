#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <iostream>
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

void solution()
{

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int p1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            p1 = i;
            s[i] = 'X';
            break;
        }
    }
    int p2 = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*' || s[i] == 'X')
        {
            p2 = i;
            s[i] = 'X';
            break;
        }
    }

    if (p1 == p2)
    {
        cout << 1 << "\n";
        return;
    }

    int ans = 2;

    int l = p1;

    for (int i = p1; i < p2 && l < p2; i++)
    {
        int r = l + k;

        while (r > l)
        {
            if (r > p2 || s[r] == 'X')
            {
                break;
            }
            if (s[r] == '*')
            {
                ans++;
                l = r;
                s[r] = 'X';
                break;
            }
            r--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}
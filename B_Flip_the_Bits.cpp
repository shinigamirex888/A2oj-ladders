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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES\n";
            continue;
        }

        int zero = 0;
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int f = 1;
        bool changed = false;
        for (int i = n - 1; i >= 0 && f == 1; i--)
        {
            //cout<<a[i]<<" "<<b[i]<<" "<<changed<<" "<<i<<" p\n";
            if ((a[i] != b[i] && !changed) || (a[i] == b[i] && changed))
            {
                if (zero == one)
                {
                    changed = !changed;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            if (a[i] == '1')
            {
                one--;
            }
            else
            {
                zero--;
            }
        }

        if (f == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
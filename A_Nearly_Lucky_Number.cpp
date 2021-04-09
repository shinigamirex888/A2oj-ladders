#include <bits/stdc++.h>
using namespace std;

#define lli long long int

#define nl '\n'
#define PI 3.141592653589793238
#define mod 1000000007
bool check(lli n)
{
    lli dig;
    if (n == 0)
    {
        return false;
    }
    while (n)
    {
        dig = n % 10;
        if (dig != 4 && dig != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
void solve()
{
    int i, j;
    lli n, count = 0, dig;
    cin >> n;
    while (n)
    {
        dig = n % 10;
        if (dig == 4 || dig == 7)
        {
            count++;
        }
        n /= 10;
    }
    if (check(count))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
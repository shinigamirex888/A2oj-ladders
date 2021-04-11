#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            st.insert(s[i]);
        }
    }
    if (st.size() > 0 && st.size() <= 3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

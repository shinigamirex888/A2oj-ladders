# include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
//lucky number=Numbers containing only 4 and 7 as its digits.
bool lucky(int num)
{
    while(num)
    {
        if(num%10 == 4 || num%10 == 7)
            num= num/10;
        else
            return false;
    }
    return true;
}
int main()
{
  int n;
  cin>>n;
  int ans = 0;
  for(int i = 1;i <= n;i++)
  {
      if(lucky(i))
      {
      if(n % i == 0)
        {ans = 1;
        break;}
      }
  }
  if(ans == 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}
/*int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(isLucky(i) && n%i==0){cout<<"YES";
    return 0;
    }

}
cout<<"NO";




    return 0;*/
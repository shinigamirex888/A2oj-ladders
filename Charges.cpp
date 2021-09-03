#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      string s[n];
      int i=0;
      for( i=0;i<n;i++)
      cin>>s[i];
      
      int sum=0;
      for(int i=0;i<n-1;i++)
      {
          if(s[i]==s[i+1])
          sum+=2;
          else
          sum+=1;
      }
      while(k--)
      {
          int q,c=0,m=0;
          cin>>q;
          if(q==1)
          {
              if(s[q-1]==s[q])
              c+=2;
              else
              c+=1;
          }
          else if(q==n)
          {
              if(s[q-1]==s[q-2])
              c+=2;
              else
              c+=1;
          }
          else
          {
              if(s[q-1]==s[q-2] && s[q-1]==s[q])
              c+=4;
              else if(s[q-2]==s[q])
              c+=2;
              else
              c+=3;
          }
          if(s[q-1]=="0")
          s[q-1]="1";
          else
          s[q-1]="0";
          if(q==1)
          {
              if(s[q-1]==s[q])
              m+=2;
              else
              m+=1;
          }
          else if(q==n)
          {
              if(s[q-1]==s[q-2])
              m+=2;
              else
              m+=1;
          }
          else
          {
              if(s[q-1]==s[q-2] && s[q-1]==s[q])
              m+=4;
              else if(s[q-2]==s[q])
              m+=2;
              else
              m+=1;
          }
          if(c>m)
          sum=sum-(c-m);
          else if(c<m)
          sum=sum+(m-c);
          cout<<sum<<endl;
      }
  }
  return 0;
}
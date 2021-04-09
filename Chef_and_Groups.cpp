# include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define INF 2000000000
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int grp=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && s[i+1]=='0'){
            grp++;
        }
    }
    if(s[n-1]=='1'){
        grp++;
    }
    cout<<grp<<endl;
}


    return 0;
}
/*#include​​ "iostream.h"
using namespace std;

// Main Function
int main()
{
    // Input number of test cases

    int cases;
    scanf("%d", &cases);

    // Solve for each test case
    while (c--)
    {
        // Take the input
        int n;

        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i != n - 1; ++i)
        {
            scanf("%d", &arr[i]);
        }

        // Print the output
        printf("Third\n");
    }
}*/
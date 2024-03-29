#include <bits/stdc++.h>
using namespace std;

int LCSubStr(string s1,string s2, int m, int n) 
{ 
    int dp[m+1][n+1]; 
    int result = 0;  
  
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0) 
                  dp[i][j] = 0; 
  
            else if (s1[i-1] == s2[j-1]) 
            { 
                  dp[i][j] = dp[i-1][j-1] + 1; 
                result = max(result, dp[i][j]); 
            } 
            else dp[i][j] = 0; 
        } 
    } 
    return result; 
} 
  

int main() 
{ 
    int t;
    cin>>t;
    int m, n;
    string X,Y;
    while(t--){
        cin>>m>>n;
        cin>>s1>>s2;
        cout<<LCSubStr(s1, s2, m, n)<<endl;    
    }
    return 0; 
} 

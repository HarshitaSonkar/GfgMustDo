#include <bits/stdc++.h>
using namespace std;

int coinchange(vector<int>& coins, int n,int sum){
    
    vector<vector<int>> dp(n+1, vector<int>(sum+1));
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            if(i == 0)
                dp[i][j] = 0;
            if(j == 0)
                dp[i][j] = 1;
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(coins[i-1] <= j)
                dp[i][j] = dp[i][j - coins[i-1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}             
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int>coins(n);
	    
	    for(int i = 0; i < n; i++){
	        cin>> coins[i];
	    }
	    int sum;
	    cin >> sum;
    
	    cout<<coinchange(coins, n, sum)<<endl;
	    
	}
	return 0;
}

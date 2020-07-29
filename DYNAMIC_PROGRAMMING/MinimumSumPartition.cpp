#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 ll partition(vector<ll>& arr){
    ll n = arr.size();
    ll sum = 0;
    
	    for(ll i = 0; i < n; i++){
	        
	         sum += arr[i];       
	    } 
    ll dp[n+1][sum+1];          // int array 
    
   for(ll i = 0; i <=n; i++){
        for(ll j = 0; j <=sum; j++){
            if(i == 0)
                dp[i][j] = 0;
            if(j == 0)
                dp[i][j] = 1;  
        }
   }  
   
   for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= sum; j++){
            if(j >= arr[i-1])
                dp[i][j] = dp[i-1][j] || (dp[i-1][j - arr[i-1]]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    
    ll mn = INT_MAX;
    
    for(ll i = 1; i <= sum; i++){
        if(dp[n][i] == 1)
            mn = min(mn, abs(2 * i - sum));     
    }
    return mn;
}

int main() {
	//code
	ll t;
	cin >> t;
	ll n;
	
	while(t--){
	    cin >> n;
	    vector<ll>a(n);
	   
	    for(ll i = 0; i < n; i++){
	        cin >> a[i];
	        
	    }
	    cout << partition(a) << endl;
	}
	return 0;
}                              

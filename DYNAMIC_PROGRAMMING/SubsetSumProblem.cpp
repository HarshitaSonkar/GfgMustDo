#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string subsetSum(ll arr[], ll n, ll sum){
    
    bool dp[n+1][sum+1];
    
    for(ll i=0; i<=n; i++){
        for(ll j=0; j<=sum; j++){
            if(i == 0)
                dp[i][j] = false;
            if(j == 0)
                dp[i][j] = true;
        }
    }
    
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=sum; j++){
            
            if(arr[i-1] <= j){
                dp[i][j] = (dp[i-1][j-arr[i-1]]) ||  dp[i-1][j];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return (dp[n][sum] == true)? "YES" : "NO";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll sum = 0;
        ll arr[n];
        
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum%2 == 0)
            cout<<subsetSum(arr, n, sum/2)<<"\n";
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}

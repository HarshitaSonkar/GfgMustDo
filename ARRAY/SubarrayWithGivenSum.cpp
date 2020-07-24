#include <bits/stdc++.h>
using namespace std;

int main() {
static auto x = []() {ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();
	//code
    int t;
	cin >> t;
	
	while(t--){
	    int n;
	    int k;
	    int i = 0;
	    int j = 0;
	    int sum = 0;
	    cin >> n >> k;
	    
	    bool found = false;
	    
	    vector<int> temp(n);
	    
	    for(int i = 0; i < n; i++){
	        cin >> temp[i];
	    }
	    
	    while(i < n || j < n){
	       
	        if(sum == k){
	            found = true;
	            break;
	        }else if(sum > k){
	            sum -= temp[j];
	            j++;
	        }else{
	              if(i == n){
	                  break;
	               }
	             sum += temp[i];
	             i++;
	        }
	    }
	    
	    if(!found){
	        cout << "-1";
	    }
	    else{
	        cout << j+1 << " " << i;
	    }
	    
	    cout << endl;
	}
	
	return 0;
}

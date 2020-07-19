#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    int csum = 0;
	    int maxsum = 0;
	    int num = 0;
	    for(int i = 0; i < n; i++){
	        csum += arr[i];
	        if(csum > maxsum) 
              maxsum = csum;
	        if(csum < 0) {
	            csum = 0;
	            num++;
	        }
	    }
	    if(num == n) 
      cout << *max_element(arr.begin(), arr.end()) << endl;
	    else 
      cout << maxsum <<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    //int x;
	    vector<int> res(n-1);
	    for(int i = 0; i < n - 1; i++){
	        cin >> res[i];
	    }
	    int sum = (n * (n+1))/2;
	    int x = sum - accumulate(res.begin(), res.end(),0);
	    cout<< x << endl;
	}
	return 0;
}

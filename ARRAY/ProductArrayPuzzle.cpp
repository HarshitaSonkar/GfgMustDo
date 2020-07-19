#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) 
          cin >> arr[i];
	    int x[n + 1];
	    x[0] = 1;
	    for(int i = 1; i <= n; i++) 
         x[i] = x[i - 1] * arr[i - 1];
	    int y[n + 1];
	    y[n] = 1;
	    for(int i = n - 1; i >= 0; i--){
	        y[i] = y[i + 1] * arr[i];
	    }
	    for(int i = 1 ; i <= n; i++){
	        cout << x[i - 1] * y[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

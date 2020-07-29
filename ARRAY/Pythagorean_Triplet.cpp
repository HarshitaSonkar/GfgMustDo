#include <bits/stdc++.h>
using namespace std;

int triplet(int a[], int n) {
    int i;

    for(i = n-1; i >=0; i--) {
	        int start = 0, end = i-1;
	        
	        while(start < end) {
	            if((a[start]*a[start] + a[end]*a[end]) == a[i]*a[i]) {
    	           return 1;
    	        } else if ((a[start]*a[start] + a[end]*a[end]) < a[i]*a[i]) {
    	            start++;
    	        } else {
    	            end--;
    	        }
	        }
	        
    }
    
    return 0;
}

int main() {
	
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i ++) { 
            cin >> a[i]; 
        }
	    
	    sort(a,a+n);
	    
	    int result = triplet(a, n);

	    if(result == 1) {
	        cout << "Yes" << endl;

	    } else {
	        cout << "No" << endl;
	    }
	}
	
	return 0;
}

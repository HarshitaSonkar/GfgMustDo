#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int res = -1;
	    int i = 0;
	    while(s[i] != NULL){
	       if(s[i] == '1') 
            res = i; 
	          i++;
	    }
	    cout << res << endl;
	}
	return 0;
}

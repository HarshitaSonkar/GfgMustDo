#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int num; 
	    cin >> num;
	    string s = bitset<16> (num).to_string();
	    int n;
	    n = s.size();
	    int i;
	    int count = 0;
	    if(num == 0)
	     cout << "0" <<endl;
	    else{
	        for(i = s.length(); i > 0; i--){
	            count++;
	            if(s[i] == '1')
	            break;
	        }
	         cout << count - 1 << endl; 
	    }
	}
	return 0;
}

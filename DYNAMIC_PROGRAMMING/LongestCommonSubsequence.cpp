#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2){
    int m = s1.size();
    int n = s2.size();
               
    int t[m + 1][n + 1];
    
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
        }
    }
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i - 1] == s2[j - 1])
               t[i][j] = t[i - 1][j - 1] + 1;
            else
               t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    
        return t[m][n];
    }


int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int m,n;
	    cin >> m >> n;
	    string s1;
	    string s2;
	
	    cin >> s1 >> s2;
	    
	    cout << LCS(s1,s2) << endl;
	}
	return 0;
}

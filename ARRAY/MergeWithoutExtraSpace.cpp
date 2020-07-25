#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int res1[n];
	    int res2[m];
	    for(int i = 0; i < n; i++){
	        cin >> res1[i];
	    }
	    for(int j = 0; j < m; j++){
	        cin >> res2[j];   
	    }
	    int i = n - 1; 
	    int j = 0;
	    while( i >= 0 && j < m){
	        if(res1[i] > res2[j]){
	           swap(res1[i], res2[j]);
	        }
          i--;
	        j++;
	    }
	    sort(res1, res1 + n);
	    sort(res2, res2 + m);
	    
	    for(int i = 0; i < n; i++)
            cout << res1[i] << " ";
        for(int j = 0; j < m; j++)
            cout << res2[j] << " ";
	    
	    cout << endl;
	   }
	   
	return 0;               
}

******************* SOLUTION 2******************************
  int main() {
	//code
	
  int t;
	cin >> t;
	while(t--){
	      int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];
        int i = 0, j = 0, k = 0;
        
        while(i < n && j < m)
        {
            if(a[i] < b[j])
                cout << a[i++] << " ";
            else
                cout << b[j++] << " ";
        }
        
        while(i!=n)
            cout << a[i++] << " ";
        while(j!=m)
            cout << b[j++] << " ";
            
        cout << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
	//code
	int t;
	cin >> t;
	int n;
	while(t--){
	    cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i]; 
        }
        
        for(int i=0, j = n-1, k=0; i <= j; k++){
            if(k % 2 == 0){ 
                cout << a[j] << " " ;
                j--;
            }else{
                cout << a[i]<<" "; 
                i++;
             }
        }
        cout << endl;
	}
	return 0;
}

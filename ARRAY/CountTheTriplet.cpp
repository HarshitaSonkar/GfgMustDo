#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	int n;
	int a[n];
	int count = 0;
  while(t--){
	vector<int> res;
	for(int i = 0; i < n ; i++){
	    cin >> a[i];
	    res.push_back(a[i]);
	  }
	  sort(res.begin(), res.end());
	  
	  for(int i = n - 1; i > 0; i--){
	      int k = 0;
	      int j = i - 1;
	      while(k < n){
	          
	          if(a[k] + a[j] == a[i]){
	              count++;
	              j--;
	              
	          }else if(a[k] + a[j] < a[i]){
	              k++;
	              
	          }else{
	              j--;
	          } 
	     }
	  }
	  if(count == 0){
	      count = -1;
	  }
	  cout << count << endl;
   }

    return 0;
}

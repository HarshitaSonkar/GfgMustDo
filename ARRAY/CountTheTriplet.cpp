#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	//int a[n];

  while(t--){
      	int count = 0;
      	int n;
      	cin >> n;
      	//int a[n];
     	vector<int> res(n);
     	for(int i = 0; i < n ; i++){
     	    cin >> res[i];
	        //res.push_back(a[i]);
	     }
	     sort(res.begin(), res.end());
	  
	  for(int i = n - 1; i > 1; i--){
	      int k = 0;
	      int j = i - 1;
	      while(k < j){
	          
	          if(res[k] + res[j] == res[i]){
	              count++;
	              j--;
	              
	          }else if(res[k] + res[j] < res[i]){
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

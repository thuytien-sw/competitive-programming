#include <bits/stdc++.h>
using namespace std;
int gcdVector(const vector<int>& v) {
 if(v.empty()){
  return -1;
 } else{
    return accumulate(v.begin()  + 1, v.end(), v[0], gcd<int,  int>); 
   } 
} 

int so_luong_uoc(int n) {
 int count = 0;
 abs = sqrt(n);
	for(int j = 1; j <= abs; ++j) {
		if(n % j == 0) {
			if(n / j != j) {
				count += 2;
			} else {
				count += 1;
			}
		}
	}
	return count;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T, n, k;
    cin >> T;
    
    while(T--){
        cin >> n >> k;
        int arr[n];
        vector <int> arr1;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(so_luong_uoc(arr[i]) >= k){
                arr1.push_back(arr[i]);
            }
        }
        cout << so_luong_uoc(gcdVector(arr1)) << "\n";        
    }

}
